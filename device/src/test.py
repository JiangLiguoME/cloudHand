from session import Session
import time
from etc import *

class Device(Session):
    def __init__(self, id, username, passwd):
        self.id = id
        super().__init__(username=username, passwd=passwd)
        self.binded = False
        self.binded_user = ""

    def bind(self):
        binding_topic = BINDING_DEVICE_TOPIC + self.id
        res_topic = BINDING_SERVER_TOPIC + self.id
        binding_msg = {
            binding_topic : "1"
        }

        self.client.subscribe(res_topic)
        self.client.subscribe("/device/#")
        self.publish(binding_msg)
        start_time = time.time()
        while time.time() - start_time < BINDING_WAITING_TIME:
            if self.recvdMsg(res_topic):
                if self.msgFrame[res_topic] == BINDED_SUCCEED:
                    self.binded = True
                    self.binded_user = self.msgFrame[res_topic]
                    print("绑定客户端成功")
                else:
                    print("绑定客户端失败")
                binding_msg[binding_topic] = "0"
                self.publish(binding_msg)
                self.unsubscribe(res_topic)
                break
            else:
                continue
        else:
            binding_msg[binding_topic] = "0"
            self.publish(binding_msg)
            self.unsubscribe(res_topic)
        

def test():

    s = Device(TEST_ID,TEST_USERNAME,TEST_PASSWD)
    s.run()
    s.bind()
    while True:
        time.sleep(1)

test()
