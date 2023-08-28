from ursina import *
class Voxel(Button):
    def __init__(self, Block, position=(0,0,0)):
        super().__init__(parent=scene,
            position=position,
            model='cube',
            origin_y=.5,
            texture='white_cube',
            color=color.color(0, 0, 1),
            highlight_color=color.lime,
        )
class Block():
    def __init__(self, name, id, model):
        self.name = name
        self.id = id
        self.texture = model.texture
        self.color = model.color
        self.model = model.model

class Model():
    def __init__(self, texture, color, model):
        self.texture = texture
        self.color = color
        self.model = model

class Dirt(Voxel):
    texture = "dirt"
class Cobblestone(Voxel):
    texture = "cobblestone1"