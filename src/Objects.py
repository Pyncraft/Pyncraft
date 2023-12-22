from utils import *
from VoxelTypes import Block, Model, Item
from ursina import * 
from ursina.color import *
from registry import DefaultBlockRegistry as registry
from loguru import logger



dirt_model = Model('dirt', color(0,0,0), 'cube')
cobblestone_model = Model('cobblestone1', color(0,0,0), 'cube')


class dirt(Block):
    def __init__(self):
        self.name = "Dirt"
        self.id = "internal:dirt"
        self.texture = dirt_model.texture
        self.color = dirt_model.color
        self.model = dirt_model.model
        self.item = itemfactory(self.name, self.id, self.texture, dirt_model)
        self.item.isBlockItem = True
        self.item.block = self


class cobblestone(Block):
    def __init__(self):
        self.name = "Cobblestone"
        self.id = "internal:cobblestone"
        self.texture = cobblestone_model.texture
        self.color = cobblestone_model.color
        self.model = cobblestone_model.model
        self.item = itemfactory(self.name, self.id, self.texture, dirt_model)
        self.item.isBlockItem = True
        self.item.block = self

class cobblestonesphere(cobblestone):
    def __init__(self):
        super().__init__()
        self.model = "sphere"
        self.id = "internal:cobblestonesphere"



def registerInternals():
    logger.info("Registering blocks")
    registry.RegisterBlock(dirt); registry.RegisterBlock(cobblestone); registry.RegisterBlock(cobblestonesphere)
