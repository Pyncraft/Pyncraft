from exceptions import *
import subprocess
import dill as pickle
import json
import VoxelTypes

def get_current_commit_hash():
    try:
        # Run the 'git rev-parse HEAD' command
        result = subprocess.run(['git', 'rev-parse', 'HEAD'], stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True, check=True)

        # Extract and return the commit hash
        commit_hash = result.stdout.strip()
        return commit_hash
    except subprocess.CalledProcessError:
        # Handle the case where the Git command fails
        return None

def create_blockitem_id(namespace="internal", name=""):
    return namespace + ":" + name

def save_class(obj, file_path):
    with open(file_path, "wb") as file:
        pickle.dump(savetuple(obj), file)

def load_class(file_path):
    with open(file_path, "rb") as file:
        return restoretuple(pickle.load(file))

def add_block(block, position, world):
    return VoxelTypes.Voxel(Block=block, position=position)

def savetuple(obj):
    return (obj.__class__, obj.__dict__)

def restoretuple(cls, attributes):
    obj = cls.__new__(cls)
    obj.__dict__.update(attributes)
    return obj

