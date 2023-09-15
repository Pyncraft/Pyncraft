from VoxelTypes import *
from Objects import dirt
def GenerateWorld(Seed):
    mcworld = World()
    for z in range(30):
        for x in range(30):
            mcworld.blocks[f"{x}-0-{z}"] = Voxel(Block=dirt(), position=(x,0,z))
    return mcworld
class World():
    blocks = {}
    playerpos = (0,0,0)
    hotbar = None
    hotbarcount = None

