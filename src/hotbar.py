from ursina import *
from ursina.color import *
from utils import itemfactory
class Hotbar(Entity):
    def __init__(self, num_slots=10):
        super().__init__(parent=camera.ui, scale=0.1, position=(-0.45, -0.4))
        self.num_slots = num_slots
        self.selected_slot = 0
        self.count = [0,0,0,0,0,0,0,0,0,0]
        self.items = [itemfactory("None", "null", None, None)] * num_slots  # Initialize with default items

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