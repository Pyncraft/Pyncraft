from VoxelTypes import *
from Objects import dirt
import json
import jsonpickle
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
        save["blocks"] = self.blocks
        save["playerpos"] = self.playerpos
        for i in save["blocks"]:
            save["blocks"][i] = save["blocks"][i].export()
            save["blocks"][i][0] = save["blocks"][i][0].export()
        return json.dumps(save)
    def Load(self, data):
        data = json.loads(data)
        for i in data["blocks"]:
            data["blocks"][0] = jsonpickle.decode(data["blocks"][0], keys=True)
            data["blocks"][i] = Voxel(data["blocks"][i])
        self.blocks = data["blocks"]
        self.playerpos = data["playerpos"]


