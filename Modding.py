from ursina import *
from VoxelTypes import *


def create_blockitem_id(namespace="internal", name=""):
    return namespace + ":" + name