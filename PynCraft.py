from ursina import *
from ursina.prefabs.first_person_controller import FirstPersonController
from VoxelTypes import *
from Blocks import *


app = Ursina()
Cursor(texture="crosshair")
window.title = 'PynCraft' 



for z in range(30):
    for x in range(30):
        voxel = Voxel(Block=dirt, position=(x,0,z))


def input(key):
    if key == 'right mouse down':
        hit_info = raycast(camera.world_position, camera.forward, distance=5)
        if hit_info.hit:
            Voxel(Block=cobblestone, position=hit_info.entity.position + hit_info.normal)
    if key == 'left mouse down' and mouse.hovered_entity:
        hit_info = raycast(camera.world_position, camera.forward, distance=5)
        if hit_info.hit:
            destroy(mouse.hovered_entity)
    if key == "escape":
        exit()


player = FirstPersonController()
app.run()