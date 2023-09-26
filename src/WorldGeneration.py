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
        frozensave = jsonpickle.encode(save, keys=True, unpicklable=True)
        return json.dumps(frozensave)
    def Load(self, data):
        data = jsonpickle.decode(json.loads(data), keys=True)
        self.blocks = data["blocks"]
        self.playerpos = data["playerpos"]


