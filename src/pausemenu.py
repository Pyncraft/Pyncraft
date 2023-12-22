from ursina import *
from ursina.color import *
from loguru import logger
class PauseMenu(Entity):
    def __init__(self, player, wrld):
        logger.info("Pause menu has been initalized")
        self.player = player
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