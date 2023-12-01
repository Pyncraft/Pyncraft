from typing import Any
from VoxelTypes import *
from Objects import dirt
import json
from utils import add_block
from registry import DefaultBlockRegistry as breg
def GenerateWorld(Seed):
    mcworld = World()
    for z in range(30):
        for x in range(30):
            mcworld.blocks[f"{x}-0-{z}"] = Voxel(Block=dirt(), position=(x,0,z))
    return mcworld
def makeWorld():
    return World()
class World():
    blocks = {}
    playerpos = [0,0,0]
    hotbar = None
    hotbarcount = None
    version = 1
    def Save(self, filename):
        save = {}
        blocks = {}
        for i in self.blocks:
            blocks[i] = self.blocks[i].id
        save["blocks"] = blocks
        with open(filename, "w+") as f:
            json.dump(save, f)

    def Load(self, filename):
        print(f"Loading world {filename}")
        with open(filename, "r+") as f:
            save = json.load(f)
        blocks = save["blocks"]
        for i in blocks:
            block = breg.blocks[blocks[i]]()
            location = i.split("-")
            self.blocks[i] = add_block(block, tuple(map(int,location)), self)
    def Unload(self):
        for i in self.blocks:
            destroy(self.blocks[i])