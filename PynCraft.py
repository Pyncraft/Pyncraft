from ursina import *
from ursina.prefabs.first_person_controller import FirstPersonController
from VoxelTypes import *
from Objects import *
from WorldGeneration import GenerateWorld

app = Ursina()

GenerateWorld(1)


def input(key):
    if key == 'right mouse down':
        hit_info = raycast(camera.world_position, camera.forward, distance=5)
        if hit_info.hit:
            Voxel(Block=cobblestone, position=hit_info.entity.position + hit_info.normal)
    if key == 'left mouse down' and mouse.hovered_entity:
        hit_info = raycast(camera.world_position, camera.forward, distance=5)
        if hit_info.hit:
            destroy(mouse.hovered_entity)
    if key == "escape" and pause_menu.enabled:
        pause_menu.close_menu()
        mouse.locked = True
    elif key == "escape":
        pause_menu.enabled = True
        mouse.locked = False
        player.enabled = False
    print(f"Key {key} pressed")



player = FirstPersonController()
crosshair = Crosshair()

window.title = 'PynCraft' 
window.show_ursina_splash = False
player.cursor = False

pause_menu = PauseMenu(player)


app.run()
