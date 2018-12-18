import paho.mqtt.client as mqtt
import random
import time
import hashlib
from etc import *

class Session(object):
    def __init__(self, username = "", passwd = "", *args, **kwargs):
        self.client = mqtt.Client(client_id=str(time.time()))
        self.client.username_pw_set(username=username, password=passwd)
        self.msgFrame = {}
        def on_connect(client,userdata,flag,rc):
            if rc == 0:
                print("连接服务器成功")
            else:
                print("连接失败")
            print("您好，" + self.client._username.decode('utf-8'))
        def on_message(client,userdata,msg):
            self.msgFrame[msg.topic] = msg.payload.decode("utf-8")
        self.client.on_connect = on_connect
        self.client.on_message = on_message

    def __repr__(self):
        return "Session connnected to server"

    def subscribe(self, topics, qos=2):
        if isinstance(topics,list):
            for topic in topics:
                self.client.subscribe(topic,qos=qos)
        elif isinstance(topics,str):
            self.subscribe(topics, qos=qos)
        else:
            raise ValueError

    def publish(self, msgQueue, qos=2):
        if isinstance(msgQueue,dict):
            for key in msgQueue:
                self.client.publish(key,msgQueue[key])
        else:
            raise ValueError

    def unsubscribe(self, topics, qos=2):
        if isinstance(topics, list):
            for topic in topics:
                self.client.unsubscribe(topic)
        elif isinstance(topics, str):
            self.client.unsubscribe(topics)
        else:
            raise ValueError
            
    def showMsgFrame(self):
        for key in self.msgFrame:
            print("%s:%s"%(key,self.msgFrame[key]))

    def recvdMsg(self, topic):
        if topic in self.msgFrame:
            return True
        else:
            return False
    
    def run(self):
        self.client.connect(BROKER_IP,BROKER_PORT)
        self.client.loop_start()

    def stop(self):
        self.client.disconnect()


class AskServer(Session):
    def __init__(self, username, passwd, *args, **kwargs):
        super().__init__(username=username, passwd=passwd)
        self.loginState= False
        self.signupState= False

    def login(self, timeout = 10):
        responseTopic = LOGIN_SERVER_TOPIC + self.client._username
        requestTopic = LOGIN_CLIENT_TOPIC + self.client._username
        self.subscribe(responseTopic)
        self.client.publish(requestTopic, self.client._password)
        beginTime = time.time()

        while time.time() - beginTime < timeout:
            if LOGIN_SERVER_TOPIC in self.msgFrame.keys():
                if self.msgFrame[responseTopic] == LOGIN_SUCCESS:
                    self.loginState = True
                    print("登录成功")
                else:
                    print("登录失败")
                break



    def signup(self):
        pass

    def getUpdate(self):
        pass

    def getDevice(self):
        pass

    def bindDevice(self):
        pass

    def run(self):
        pass

    def logout(self):
        pass
    


def testSession():

    msgQueue = {}
    for i in range(100):
        key = "/device/" + str(i)
        msgQueue[key] = str(random.randint(0,10000))
    s1 = Session()
    s2 = Session()
    s1.run()
    s2.run()

    topics = []
    for key in msgQueue:
        topics.append(key) 
    s1.subscribe(topics)

    while True:
        time.sleep(1)
        for key in msgQueue:
            msgQueue[key] = str(random.randint(0,4095))
        s2.publish(msgQueue)
        s1.showMsgFrame()

if __name__ == '__main__':
    testSession()
