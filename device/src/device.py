import paho.mqtt.client as mqtt
import time
from etc_device import *

class Device(mqtt.Client):
    def __init__(self, username = "", passwd = "", *args, **kwargs):
        super().__init__(client_id = str(time.time()))
        self.msg_box = {}
        def on_connect(client, userdata, flag, rc):
            if rc == 0:
                print("连接服务器成功")
            else:
                print("连接失败")
        def on_message(client, userdata, msg):
            self.msg_box[msg.topic] = msg.payload.decode("utf-8")
        self.on_connect = on_connect
        self.on_message = on_message

    def show_msg(self):
        for key in self.msg_box:
            print(key + ":" + self.msg_box[key])

def main():
    d = Device(TEST_USERNAME, TEST_PASSWD)
    d.connect(BROKER_IP, BROKER_PORT)
    d.loop_start()
    d.subscribe(TEST_SUBSCRIBE_TOPIC)
    while True:
        d.publish(TEST_PUBLISH_TOPIC, TEST_PUBLISH_PAYLOAD, qos = 2)
        time.sleep(1)
        d.show_msg()

if __name__ == "__main__":
    main()