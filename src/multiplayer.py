import tkinter as tk
import ursinanetworking as net
from loguru import logger
multiplayer = False
mworld = None

def selectmultiplayer():
    def singleplayr():
        global multiplayer
        multiplayer = False
    def multiplayr():
        global multiplayer
        multiplayer = True
    
    modemenu = tk.Tk()
    modemenu.title = "Pyncraft"
    modemenu.geometry = "400x200"
    txt1 = tk.Label(modemenu, text="Choose")
    txt1.pack()
    bt1 = tk.Button(modemenu, text="Singleplayer", command=singleplayr)
    bt1.pack()
    bt2 = tk.Button(modemenu, text="Multiplayer", command=multiplayr)
    bt2.pack()
    modemenu.mainloop()
    return multiplayer



def CreateMultiplayerClient(host, port):
    from PynCraft import wrld
    class MultiplayerClient:
        multiclient = net.UrsinaNetworkingClient(host, port)
        @multiclient.event
        def onConnectionEstablished():
            logger.info("Connected to multiplayer server")
        @multiclient.event
        def onConnectionError(Reason):
            logger.error(f"Multiplayer error: {Reason}")
        @multiclient.event
        def currentWorld(world):
            wrld.Unload() 
            wrld.LoadFromDict(world)
    return MultiplayerClient() #TODO: add host and ports as args to MultiplayerClient, i hate this spaghet





        
    