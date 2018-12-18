#程序配置文件
import os

#文件路径设置
ROOT_PATH , tmp = os.path.split(os.getcwd())
CODE_PATH = ROOT_PATH + "/src"
DATA_PATH = ROOT_PATH + "/data"
INFO_PATH = DATA_PATH + "/info"

#服务器与连接参数设置
BROKER_IP = '127.0.0.1'
BROKER_PORT  = 1883
TIME_OUT = 3

#客户端相关话题定义
CLIENT_TOPICS = "/client/#"
LOGIN_CLIENT_TOPIC = "/client/login/"
SIGNUP_CLIENT_TOPIC = "/client/signup/"
LOGOUT_CLIENT_TOPIC = "/client/logout/"
BINDING_CLIENT_TOPIC = "/client/bind/"
BINDING_WAITING_TIME = 20

#服务器相关话题定义
LOGIN_SERVER_TOPIC = "/server/login/"
SIGNUP_SERVER_TOPIC = "/server/signup/"
LOGOUT_SERVER_TOPIC = "/server/logout/"
BINDING_SERVER_TOPIC = "/server/bind/"

#设备相关的配置
BINDED = 1
UNBINDED = 0
BINDED_SUCCEED = "1"
BINDED_FAILED = "0"
BINDING_WAITING_TIME = 15
BINDING_DEVICE_TOPICS = "/device/bind/#"
BINDING_READY = "1"
BINDING_DEVICE_TOPIC = "/device/bind/"

#状态信号码定义
LOGIN_SUCCESS = "0"
WRONG_PASSWD = "1"
UNKNOWED_USERNAME = "2"
BAD_INTERNET = "3"
SERVER_REFUSED = "4"

#测试相关配置
TEST_USERNAME = "admin"
TEST_PASSWD = "public"


