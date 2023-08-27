from ursina import *
from VoxelTypes import *

def create_block(name, texture, color):
    new_class = type(name, (Voxel,), {
        'texture': texture,
        'color': color,
    })
    return new_class