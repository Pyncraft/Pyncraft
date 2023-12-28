from utils import *
from VoxelTypes import Block, Model
from ursina import * 
from ursina.color import *
from registry import DefaultBlockRegistry as registry
from loguru import logger



dirt_model = Model('dirt', color(0,0,0), 'cube')
cobblestone_model = Model('cobblestone1', color(0,0,0), 'cube')


class dirt(Block):
    name = "Dirt"
    id = "internal:dirt"
    texture = dirt_model.texture
    color = dirt_model.color
    model = dirt_model.model
dirt.item = createblockitem(dirt().name, dirt().id, dirt().texture, dirt_model, "dirtitem", dirt)



class cobblestone(Block):
    name = "Cobblestone"
    id = "internal:cobblestone"
    texture = cobblestone_model.texture
    color = cobblestone_model.color
    model = cobblestone_model.model
cobblestone.item = createblockitem(cobblestone().name, cobblestone().id, cobblestone().texture, cobblestone_model, "cobblestoneitem", cobblestone)




def registerInternals():
    logger.info("Registering blocks")
    registry.RegisterBlock(dirt); registry.RegisterBlock(cobblestone)
