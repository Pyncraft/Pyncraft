from typing import Any
from VoxelTypes import *
from Objects import dirt
import json
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
    def Save(self):
        save = {}
        blocks = {}
        for i in self.blocks:
            blocks[i] = self.blocks[i].id
        return blocks

    def Load(self, data):
        data = json.loads(data)
        self.blocks = data["blocks"]
        self.playerpos = data["playerpos"]


