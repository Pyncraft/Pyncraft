from ursina import *
class Voxel(Button):
    def __init__(self, Block, position=(0,0,0)):
        print(f"Block {Block.name} has been added with model {Block.model}")
        super().__init__(parent=scene,
            position=position,
            model=Block.model,
            origin_y=.5,
            texture=Block.texture,
            color=color.color(0, 0, 1),
            highlight_color=color.lime,
        )
class Block():
    def __init__(self, name, id, block_model):
        print(f"Block {id} has been defined")
        self.name = name
        self.id = id
        self.texture = block_model.texture
        self.color = block_model.color
        self.model = block_model.model

class BlockModel():
    def __init__(self, texture, color, model):
        print(f"Block model {id} has been defined")
        self.texture = texture
        self.color = color
        self.model = model

