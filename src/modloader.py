import importlib, importlib.util, importlib.resources, importlib.abc
import os, sys
from loguru import logger
modVars = {}
class Mod:
    def __init__(self, module):
        self.module = importlib.import_module(name=module)
        self.run_function("mod_pointinit", modVars)
        self.run_function("mod_init")
        
        logger.info(f"Mod {module} finished INIT!")
    def run_function(self, function_name, *args, **kwargs):
        if hasattr(self.module, function_name) and callable(getattr(self.module, function_name)):
            function_to_run = getattr(self.module, function_name)
            return function_to_run(*args, **kwargs)
        else:
            logger.warn(f"Function {function_name} not found in the provided module.")
    def get_variable(self, variable_name):
        try:
            return getattr(self.module, variable_name)
        except AttributeError:
            logger.warn("Variable {variable_name} not found in the provided module.")
            return None
    def terminate(self):
        self.module = None
    module = None
    
class ModArray():
    @staticmethod
    def init():
        sys.path.append("mods")
    mods = {}
    def Add(self, file):
        self.mods[file] = Mod(file)
    def Remove(self, file):
        self.mods[file].terminate()
        self.mods[file] = None
    def Load(self):
        for root, _, files in os.walk("mods"):
            for file in _:
                # If the file is a .pyc file, IGNORE IT!
                if not file == "__pycache__":
                    # Get the full path to the mod file
                    mod_file_path = os.path.normpath(os.path.join(root, file))
            
                    # Run the mod file
                    self.Add(file)
