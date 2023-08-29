from ursina import *

class Voxel(Button):
    def __init__(self, Block, position=(0,0,0), metadata={}):
        print(f"Block {Block.name} has been added with model {Block.model}")
        super().__init__(parent=scene,
            position=position,
            model=Block.model,
            origin_y=.5,
            texture=Block.texture,
            color=color.color(0, 0, 1),
            highlight_color=color.lime,
        )
        self.metadata = metadata
class Block():
    def __init__(self, name, id, block_model):
        print(f"Block {id} has been defined")
        self.name = name
        self.id = id
        self.texture = block_model.texture
        self.color = block_model.color
        self.model = block_model.model
        self.item = Item(name, id, block_model.texture, block_model)

class Model():
    def __init__(self, texture, color, model):
        print(f"Model {id} has been defined")
        self.texture = texture
        self.color = color
        self.model = model

class Crosshair(Entity):
    def __init__(self):
        print("Crosshair has been initalized")
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
        print("Pause menu has been initalized")
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

class float3():
    def __init__(self, x=0, y=0, z=0):
        self.x = x
        self.y = y
        self.z = z



class Hotbar(Entity):
    def __init__(self, num_slots=10):
        super().__init__(parent=camera.ui, scale=0.1, position=(-0.45, -0.4))
        self.num_slots = num_slots
        self.selected_slot = 0
        self.items = [None] * num_slots  # Initialize the items list with None for each slot

        # Create slots using item.invtext for the texture
        for i in range(num_slots):
            slot = Button(
                parent=self,
                model='quad',
                texture=self.items[i].invtext if self.items[i] else 'white_cube',  # Use item.invtext for the texture
                color=color.color(1, 1, 1),
                position=(0.8 * i, 0),
                scale=0.8,  # Adjust the scale as needed for your textures
                on_click=Func(self.select_slot, i)
            )
            self.items.append(slot)

        # Highlight the selected slot
        self.highlight_selected_slot()

    def select_slot(self, slot_index):
        self.selected_slot = slot_index
        self.highlight_selected_slot()

    def highlight_selected_slot(self):
        for i, slot in enumerate(self.items):
            if i == self.selected_slot:
                slot.color = color.lime  # Highlighted color
            else:
                slot.color = color.color(1, 1, 1)  # Default color
