from exceptions import *
import subprocess

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