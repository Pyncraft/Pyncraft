import tkinter as tk
import ursinanetworking as net
from loguru import logger
multiplayer = False

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


class MultiplayerClient:
    def __init__(self):
        self.multiclient = net.UrsinaNetworkingClient("localhost", 25800)
    @multiclient.event
    def onConnectionEstablished():
        logger.info("Connected to multiplayer server")
    @multiclient.event
    def onConnectionError(Reason):
        logger.error(f"Multiplayer error: {Reason}")
    @multiclient.event
    def currentWorld(world):
        print("gwrld:")
        print(gwrld)
        gwrld.Unload()
        gwrld.LoadFromDict(world)

        
    