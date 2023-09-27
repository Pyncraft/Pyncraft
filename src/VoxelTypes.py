from ursina import *
from ursina.color import *

class Voxel(Button):
    def __init__(self, Block, position=(0,0,0), metadata={}):
        print(f"A Voxel of block {Block.name} has been added with model {Block.model}")
        super().__init__(parent=scene,
            position=position,
            model=Block.model,
            origin_y=.5,
            texture=Block.texture,
            color=color.color(0, 0, 1),
            highlight_color=color.lime,
        )
        self.metadata = metadata
    voltIn = 0
    voltOut = 0
    ampIn = 0
    ampOut = 0
    maxin = 0
    maxout = 0
    maxStored = 0
    storedJoules = 0

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
        self.isBlockItem = False
        self.whenClicked = print(f"Item {self.name} has been interacted with")
        print(f"Item {id} has been defined")



class Hotbar(Entity):
    def __init__(self, num_slots=10):
        super().__init__(parent=camera.ui, scale=0.1, position=(-0.45, -0.4))
        self.num_slots = num_slots
        self.selected_slot = 0
        self.count = [0,0,0,0,0,0,0,0,0,0]
        self.items = [Item("None", "null", None, None)] * num_slots  # Initialize with default items

        # Create slots using item.invtext for the texture
        self.slots = []
        for i in range(num_slots):
            slot = Button(
                parent=self,
                model='quad',
                texture=self.items[i].invtext,
                color=color.color(1, 1, 1),
                position=(0.8 * i, 0),
                scale=0.8,  # Adjust the scale as needed for your textures
                on_click=Func(self.select_slot, i)
            )
            self.slots.append(slot)

        # Highlight the selected slot
        self.highlight_selected_slot()

    def select_slot(self, slot_index):
        self.selected_slot = slot_index
        self.highlight_selected_slot()

    def highlight_selected_slot(self):
        for i, slot in enumerate(self.slots):
            if i == self.selected_slot:
                slot.color = color.white  # Highlighted color
            else:
                slot.color = color.gray  # Default color

    def add_item(self, item, count, slot_index):
        self.items[slot_index] = item
        if item.isBlockItem == True:
            self.slots[slot_index].texture = item.invtext
        else:
            self.slots[slot_index].texture = item.invtext
        self.slots[slot_index].texture = item.invtext  # Update the texture
        self.count[slot_index] = count

class VoltTierArray:
    ULV = 8
    LV = 32
    MV = 128
    HV = 512
    EV = 2048
    IV = 8192
    LUV = 32768
    ZPM = 131072
    UV = 524288
    UHV = 2097152
    
class Block():
    #def __init__(self, name, id, block_model):
    #    print(f"Block {id} has been defined")
    name = "cool block 10000"
    id = "internal:epic"
    texture = "cooltexture"
    color = color.white
    model = "cube"
    item = Item(name, id, texture, None)
    item.isBlockItem = True


