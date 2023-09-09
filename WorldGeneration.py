from VoxelTypes import *
from Objects import dirt
def GenerateWorld(Seed):
    for z in range(30):
        for x in range(30):
            voxel = Voxel(Block=dirt(), position=(x,0,z))