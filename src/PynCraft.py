
import ctypes, os
from ursina import *
from ursina.color import *
from ursina.prefabs.first_person_controller import FirstPersonController
from VoxelTypes import *
from Objects import *
from WorldGeneration import GenerateWorld, World, makeWorld
from utils import get_current_commit_hash, add_block
import configparser
import modloader
import tkinter as tk
from loguru import logger
from pausemenu import PauseMenu
from hotbar import *
import random


app = Ursina(borderless=False)


@logger.catch
def input(key):
    if key == 'right mouse down':
        hit_info = raycast(camera.world_position, camera.forward, distance=5)
        if hit_info.hit:
            try:
                add_block(hotbar.items[hotbar.selected_slot].block, hit_info.entity.position + hit_info.normal, wrld) #Add block
            except AttributeError:
                pass #Clearly empty hotbar slot
    if key == 'left mouse down' and mouse.hovered_entity:
        hit_info = raycast(camera.world_position, camera.forward, distance=5)
        if hit_info.hit:
            if mouse.hovered_entity.__class__ == Voxel: #Destroy the block 
                destroy(mouse.hovered_entity)
    if key == "escape" and pause_menu.enabled:
        pause_menu.close_menu()
        mouse.locked = True
    elif key == "escape":
        pause_menu.enabled = True #Show the pause menu
        player.enabled = False
    elif key == "right shift":
        player.disable() 
        def saveGame(): #Save and load helper funcs
            wrld.Save(inputtxt.get("1.0",'end-1c'))
        def loadGame():
            wrld.Unload()
            wrld.Load(inputtxt.get("1.0",'end-1c'))
        saveframe = tk.Tk()
        saveframe.title("Save Input") 
        saveframe.geometry('400x200')
        inputtxt = tk.Text(saveframe, 
                   height = 1, 
                   width = 20)
        inputtxt.pack()
        saveButton = tk.Button(saveframe, 
                        text = "Save",  
                        command = saveGame) 
        saveButton.pack()
        loadButton = tk.Button(saveframe, 
                        text = "Load",  
                        command = loadGame) 
        loadButton.pack()
        saveframe.mainloop()
        player.enable()
        
    for i in range(10):
        if held_keys[str(i+1)]:
            hotbar.select_slot(i)
    #logger.debug(f"Key {key} pressed")

@logger.catch
def update():
    if player.y < -255:
        player.y = 255
ver = "0.2-alpha.3"



config = configparser.ConfigParser()
config.read('conf.ini')

player = FirstPersonController()

if os.name == "nt": # Change the icon on windows, how do I do it for linux?

    myappid = u'mycompany.myproduct.subproduct.version' # arbitrary string
    ctypes.windll.shell32.SetCurrentProcessExplicitAppUserModelID(myappid)



window.show_ursina_splash = False
window.borderless = False
window.title = 'PynCraft' 
window.icon = "icons/logo64.ico"
player.cursor = False

try:
    if config['Camera']['Orthographic'] == "True":
        logger.info("Crosshair disabled")
    else:
        crosshair = Crosshair()
except Exception:
    crosshair = Crosshair()

confdisabled = True

if confdisabled == False:
    camera.orthographic = config['Camera']['Orthographic'] == "True"
    camera.fov = config['Camera']['FOV']  # Adjust the field of view as needed
    camera.clip_plane_far = config['Camera']['ClipPlaneFar']
else:
    camera.orthographic = False
    camera.fov = 90
    camera.clip_plane_far = 100

wrld = None

pause_menu = PauseMenu(player, wrld)
hotbar = Hotbar(num_slots=10)
version_text = Text(text=f"Pyncraft {ver}-{get_current_commit_hash()[:5]}", x=0, y=0.5, scale=1, color=white)


modloader.modVars = {
    "pausemenu": pause_menu,
    "hotbar": hotbar,
    "versiontext": version_text,
    "camera": camera,
    "config": config,
    "player": player,
    "window": window,
    "app": app,
    "ver": ver,
    "crosshair": crosshair,
    "wrld": wrld
}

registerInternals() #Register the blocks (dirt, cobblestone, etc)


mods = modloader.ModArray()
mods.init()
logger.info("Mod Loader initalized")
mods.Load()
logger.info("Mods initalized")


hotbar.add_item(cobblestone().item, 128, 0)
hotbar.add_item(dirt().item, 128, 1)


wrld = GenerateWorld(random.randint(-2**16,2**16))
# savefile(wrld.Save(), "dirt.wrld")
# wrld.blocks = {}



#wrld.Save("dirt.wrld")
#savefile(wrld.Save(), "dirt.wrld")
#wrld.Load("dirt.wrld")

app.run()
