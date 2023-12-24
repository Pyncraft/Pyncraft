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
    pass


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

class PauseMenu(Entity):
    def __init__(self, player, wrld, sound: Audio):
        logger.info("Pause menu has been initalized")
        self.player = player
        self.sound = sound
        super().__init__(
            parent=camera.ui,
            enabled=False,
            model='quad',
            texture='white_cube',
            color=color(0, 0, 0, 0.8),
            scale=(1, 2),
            position=(0, 0, -1)
        )

        self.exit_button = Button(
            parent=self,
            position=(0, -0.05),
            scale=(0.5, 0.05),
            text='Exit',
            on_click=self.exit_game
        )

        self.close_button = Button(
            parent=self,
            position=(0, 0.05),
            scale=(0.5, 0.05),
            text='Continue',
            on_click=self.close_menu
        )

        #self.save_textbox = TextField(
        #    parent=self,
        #    position=(0, -0.1),
        #    scale=(0.1, 1),
        #    line_height=0.5,
        #    max_lines = 1,
        #    color = None
        #)

    
        self.wrld = wrld
    def exit_game(self):
        exit()

    def close_menu(self):
        self.enabled = False
        mouse.locked = True
        self.player.enabled = True
    def save_game(self):
        self.wrld.Save(self.save_textbox.text)
    def load_game(self):
        self.wrld.Unload()
        self.wrld.Load(self.save_textbox.text)
    

class Item():
    def __init__(self, name, id, invtext, model, description=""):
        self.name = name
        self.id = id
        self.invtext = invtext
        self.model = model
        self.isBlockItem = False
        self.whenClicked = lambda: logger.debug(f"Item {self.name} has been interacted with")
    def __init_subclass__(self):
        logger.debug(f"Item {self.id} has been defined")



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
                color=color(1, 1, 1),
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
                slot.color = white  # Highlighted color
            else:
                slot.color = gray  # Default color

    def add_item(self, item, count, slot_index):
        self.items[slot_index] = item
        if item.isBlockItem == True:
            self.slots[slot_index].texture = item.invtext
        else:
            self.slots[slot_index].texture = item.invtext
        self.slots[slot_index].texture = item.invtext  # Update the texture
        self.count[slot_index] = count
    
class ItemRegistry():
    items = {}
    def RegisterItem(self, item: Item):
        self.items[item.id] = item
class BlockRegistry():
    blocks = {}
    def RegisterBlock(self, block: Block):
        logger.info(f"Block {block().id} registered")
        self.blocks[block().id] = block
    