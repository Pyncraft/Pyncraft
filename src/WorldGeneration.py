from typing import Any
from VoxelTypes import *
from Objects import dirt
import json
from utils import add_block
from registry import DefaultBlockRegistry as breg
from loguru import logger
@logger.catch
def GenerateWorld(Seed: int):
    logger.info(f"Generating world with seed {Seed}")
    mcworld = World()
    for z in range(30):
        for x in range(30):
            mcworld.blocks[f"{x}=0.0={z}"] = Voxel(Block=dirt(), position=(x,0,z))
    return mcworld
def makeWorld():
    return World()
class World():
    blocks = {}
    playerpos = [0,0,0]
    #hotbar = None
    #hotbarcount = None
    version = 1

    @logger.catch
    def Save(self, filename: str):
        logger.info(f"Saving world {filename}")
        save = {}
        blocks = {}
        for i in self.blocks:
            blocks[i] = self.blocks[i].id
        save["blocks"] = blocks
        with open(filename, "w+") as f:
            json.dump(save, f)
    @logger.catch
    def Load(self, filename: str):
        logger.info(f"Loading world {filename}")
        with open(filename, "r+") as f:
            save = json.load(f)
        blocks = save["blocks"]
        for i in blocks:
            block = breg.blocks[blocks[i]]()

            location = i.split("=")
            self.blocks[i] = add_block(block, tuple(map(float,location)), self)
    def Unload(self):
        logger.info(f"Unloading world")
        for i in self.blocks:
            destroy(self.blocks[i])
