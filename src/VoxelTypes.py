from ursina import *
from ursina.color import *
from loguru import logger
class xyzarray:
    array = {}
    def __getitem__(self,xyz):
        x,y,z = xyz
        return self.array[f"{x}-{y}-{z}"]
    def __setitem__(self,xyz, value):
        x,y,z = xyz
        self.array[f"{x}-{y}-{z}"] = value


class Voxel(Button):
    def __init__(self, Block="a", position=(0,0,0), metadata={}):
        #logger.debug(f"A Voxel of block {Block.name} has been added with model {Block.model}")
        super().__init__(parent=scene,
            position=position,
            model=Block.model,
            origin_y=.5,
            texture=Block.texture,
            color=color(0, 0, 1),
            highlight_color=lime,
        )
        self.metadata = metadata
        self.block = Block
        self.id = Block.id
        self.block = True
class Block():
    #def __init__(self, name, id, block_model):
    #    print(f"Block {id} has been defined")
    #    self.name = name
    #    self.id = id
    #    self.texture = block_model.texture
    #    self.color = block_model.color
    #    self.model = block_model.model
    #    self.item = Item(name, id, block_model.texture, block_model)
    #    self.item.isBlockItem = True
    
    def __init_subclass__(self):
        logger.debug(f"Block {id} has been defined")
    
    

class Model():
    def __init__(self, texture, color, model):
        logger.debug(f"Model {id} has been defined")
        self.texture = texture
        self.color = color
        self.model = model
    texture = "test"
    color = white10
    model = "test"

class Crosshair(Entity):
    def __init__(self):
        logger.info("Crosshair has been initalized")
        super().__init__(
            model='quad',
            texture='crosshair', 
            scale=0.05,
            rotation=Vec3(0, 0, 0),
            color=white,
            parent=camera.ui
        )
        self.enabled = True


    

class Item():
    #def __init__(self, name, id, invtext, model, description=""):
    #    self.name = name
    #    self.id = id
    #    self.invtext = invtext
    #    self.model = model
    #    self.isBlockItem = False
    #    self.whenClicked = lambda: logger.debug(f"Item {self.name} has been interacted with")
    def __init_subclass__(self):
        logger.debug(f"Item {self.id} has been defined")




    
class ItemRegistry():
    items = {}
    def RegisterItem(self, item: Item):
        self.items[item.id] = item
class BlockRegistry():
    blocks = {}
    def RegisterBlock(self, block: Block):
        logger.debug(f"Block {block().id} registered")
        self.blocks[block().id] = block
        
