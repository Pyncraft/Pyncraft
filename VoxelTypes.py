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

class Model():
    def __init__(self, texture, color, model):
        print(f"Block model {id} has been defined")
        self.texture = texture
        self.color = color
        self.model = model

class Crosshair(Entity):
    def __init__(self):
        super().__init__(
            model='quad',
            texture='crosshair', 
            scale=0.05,
            rotation=Vec3(0, 0, 0),
            color=color.white,
            parent=camera.ui
        )
        self.enabled = True

class PauseMenu(Entity):
    def __init__(self, player):
        self.player = player
        super().__init__(
            parent=camera.ui,
            enabled=False,
            model='quad',
            texture='white_cube',
            color=color.color(0, 0, 0, 0.8),
            scale=(1, 2),
            position=(0, 0, -1)
        )

        self.exit_button = Button(
            parent=self,
            position=(0, -0.1),
            scale=(0.5, 0.1),
            text='Exit',
            on_click=self.exit_game
        )

        self.close_button = Button(
            parent=self,
            position=(0, 0.1),
            scale=(0.5, 0.1),
            text='Continue',
            on_click=self.close_menu
        )

    def exit_game(self):
        exit()

    def close_menu(self):
        self.enabled = False
        mouse.locked = True
        self.player.enabled = True

class Item():
    def __init__(self, name, id, invtext, model):
        self.name = name
        self.id = id
        self.invtext = invtext
        self.model = model
        print(f"Item {id} has been defined")
