class assetman():
    nul = 0
assets = assetman
def mod_pointinit(func):
    global assets
    assets.hotbar = func["hotbar"]
    assets.pause_menu = func["pausemenu"]
    assets.version_text = func["versiontext"]
    assets.camera = func["camera"]
    assets.config = func["config"]
    assets.window = func["window"]
    assets.app = func["app"]
    assets.ver = func["ver"]
    assets.crosshair = func["crosshair"]
def mod_init():
    print("Mod Mod has been Modernized")
