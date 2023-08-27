from ursina import *
from ursina.prefabs.first_person_controller import FirstPersonController
from VoxelTypes import *


app = Ursina()

window.title = 'PynCraft' 



for z in range(30):
    for x in range(30):
        voxel = Dirt(position=(x,0,z))


def input(key):
    if key == 'right mouse down':
        hit_info = raycast(camera.world_position, camera.forward, distance=5)
        if hit_info.hit:
            Cobblestone(position=hit_info.entity.position + hit_info.normal)
    if key == 'left mouse down' and mouse.hovered_entity:
        destroy(mouse.hovered_entity)
    if key == "escape":
        exit()


player = FirstPersonController()
app.run()