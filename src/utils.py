
from exceptions import *
import subprocess
import dill as pickle
import json
from VoxelTypes import Item
import VoxelTypes
import gc
import tkinter as tk



def get_current_commit_hash():
    try:
        # Run the 'git rev-parse HEAD' command
        result = subprocess.run(['git', 'rev-parse', 'HEAD'], stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True, check=True)

        # Extract and return the commit hash
        commit_hash = result.stdout.strip()
        return commit_hash
    except Exception:
        # Handle the case where the Git command fails
        return ""

def runfunc(function):
    return function() #Idk why I did this


def create_blockitem_id(namespace="internal", name=""):
    return namespace + ":" + name

def save_class(obj, file_path):
    with open(file_path, "wb") as file:
        pickle.dump(savetuple(obj), file)

def load_class(file_path):
    with open(file_path, "rb") as file:
        return restoretuple(pickle.load(file))

def add_block(block: VoxelTypes.Block, position: tuple, world):
    world.blocks[f"{position[0]}={position[1]}={position[2]}"] = VoxelTypes.Voxel(Block=block, position=position)
    world.blocks[f"{position[0]}={position[1]}={position[2]}"].parent = world.terrain

    return world.blocks[f"{position[0]}={position[1]}={position[2]}"]

def savetuple(obj):
    return (obj.__class__, obj.__dict__)

def restoretuple(cls, attributes):
    obj = cls.__new__(cls)
    obj.__dict__.update(attributes)
    return obj

def savefile(data, filename):
    with open(filename, "w") as file:
        file.write(data)
def loadfile(filename):
    with open(filename, "r") as file:
        return file.read()

def getallinstances(classe):
    instances = []
    for ob in gc.get_objects():
        if isinstance(ob, classe):
            instances.append(ob)

def createitem(name, id, texture, model, classname):
    dicti = {"name": name, "id": id, "invtext": texture, "model": model}
    
    return type(classname, (Item,), dicti)

def createblockitem(name, id, texture, model, classname, block):
    dicti = {"name": name, "id": id, "invtext": texture, "model": model, "isBlockItem": True, "block": block}
    return type(classname, (Item,), dicti)

# Global variable to store the output
output = None

def choice(name: str, choicenames: tuple, choiceouts: tuple):
    def choice1():
        global output
        output = choiceouts[0]
        saveframe.destroy()

    def choice2():
        global output
        output = choiceouts[1]
        saveframe.destroy()

    saveframe = tk.Tk()
    saveframe.title(name) 
    saveframe.geometry('400x200')
    saveButton = tk.Button(saveframe, text=choicenames[0], command=choice1) 
    saveButton.pack()
    loadButton = tk.Button(saveframe, text=choicenames[1], command=choice2) 
    loadButton.pack()
    saveframe.mainloop()

    return output