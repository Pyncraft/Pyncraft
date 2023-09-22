from VoxelTypes import *
from Objects import dirt
import json
def GenerateWorld(Seed):
    mcworld = World()
    for z in range(30):
        for x in range(30):
            mcworld.blocks[f"{x}-0-{z}"] = Voxel(Block=dirt(), position=(x,0,z))
    return mcworld
class World():
    blocks = {}
    playerpos = [0,0,0]
    hotbar = None
    hotbarcount = None
    version = 1
    def Save(self):
        save = {}
        save["blocks"] = str(self.blocks)
        save["playerpos"] = str(self.playerpos)
        return json.dumps(save)
    def Load(self, data):
        data = json.loads(data)
        self.blocks = data["blocks"]
        self.playerpos = data["playerpos"]


