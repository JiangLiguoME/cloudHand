import paho.mqtt.client
from session import Session 
from etcServer import *

class Admin(Session):
    def __init__(self, *args, **kwargs):
        super().__init__(username=USER_NAME, passwd=PASSWD)

    def reactDevice(self):
        pass

    def reactClient(self):
        pass


a=Admin()
a.run()
while True:
    pass