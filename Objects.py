from utils import *
from VoxelTypes import Block
from VoxelTypes import Model
from ursina import *
from ursina.color import *

dirt_model = Model('dirt', color(0,0,0), 'cube')
cobblestone_model = Model('cobblestone1', color(0,0,0), 'cube')


dirt = Block("Dirt", create_blockitem_id(name="dirt"), dirt_model)
cobblestone = Block("Cobblestone", create_blockitem_id(name="cobblestone"), cobblestone_model)

