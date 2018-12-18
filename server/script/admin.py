import paho.mqtt.client
import time
from session import Session 
from etcServer import *

class DeviceProcess(Session):
    def __init__(self, *args, **kwargs):
        super().__init__(TEST_USERNAME,TEST_PASSWD)

    def attach_signal(self,signal_container):
        self.signal_container = signal_container
                          
    def handle_connect(self):
        print(BINDING_DEVICE_TOPICS)
        self.client.subscribe(BINDING_DEVICE_TOPICS)
        def on_message(client,userdata,msg):
            device_id = msg.topic.split('/')[-1]
            binding_code = msg.payload.decode("utf-8")
            res_msg = {
                BINDING_SERVER_TOPIC+device_id : BINDED_SUCCEED
            }
            if binding_code == BINDING_READY:
                self.signal_container.device_signal[device_id] = BINDING_READY
                print("设备%s进入绑定预备状态..."%device_id)
            else:
                print("设备%s退出绑定预备状态..."%device_id)
            self.publish(res_msg)
        self.client.on_message = on_message        
        

class ClientProcess(Session):
    def __init__(self, *args, **kwargs):
        super().__init__(username=TEST_USERNAME, passwd=TEST_PASSWD)

    def handle_connect(self):
        print(BINDING_DEVICE_TOPICS)
        self.client.subscribe(BINDING_DEVICE_TOPICS)
        def on_message(client,userdata,msg):
            device_id = msg.topic.split('/')[-1]
            binding_code = msg.payload.decode("utf-8")
            if binding_code == BINDING_READY:
                print("设备%s进入绑定预备状态..."%device_id)
            else:
                print("设备%s退出绑定预备状态..."%device_id)
        self.client.on_message = on_message        
        

class Signal():
    def __init__(self, *args, **kwargs):
        self.device_signal = {}
        self.client_signal = {}

a=ClientProcess()
b = DeviceProcess()
b.run()
b.handle_connect()
while True:
    time.sleep(3)
    b.showMsgFrame()