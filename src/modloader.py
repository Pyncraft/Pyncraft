import importlib
import VoxelTypes as VT, utils as UT, WorldGeneration as WG
modVars = {}
class Mod:
    def __init__(self, module):
        self.module = importlib.import_module(module)
        self.run_function("mod_pointinit", modVars)
        self.run_function("mod_init")
    def run_function(self, function_name, *args, **kwargs):
        if hasattr(self.module, function_name) and callable(getattr(self.module, function_name)):
            function_to_run = getattr(self.module, function_name)
            return function_to_run(*args, **kwargs)
        else:
            print(f"Function {function_name} not found in the provided module.")
    def get_variable(self, variable_name):
        try:
            return getattr(self.module, variable_name)
        except AttributeError:
            print(f"Variable {variable_name} not found in the provided module.")
            return None
    def terminate(self):
        self.module = None
    module = None
    
