#程序配置文件
import os

#文件路径设置
ROOT_PATH , tmp = os.path.split(os.getcwd())
CODE_PATH = ROOT_PATH + "/src"
DATA_PATH = ROOT_PATH + "/data"
INFO_PATH = DATA_PATH + "/info"

#测试相关配置
TEST_USERNAME = "device"
TEST_PASSWD = "12345678" 
TEST_ID = "60000000"
TEST_PUBLISH_TOPIC = "/test/device/" + TEST_ID
TEST_PUBLISH_PAYLOAD = "liguo"
TEST_SUBSCRIBE_TOPIC = TEST_PUBLISH_TOPIC

#服务器与连接参数设置
BROKER_IP = '127.0.0.1'
BROKER_PORT  = 1883
TIME_OUT = 3

#设备相关话题定义
BINDING_DEVICE_TOPIC = "/device/bind/"
COMMAND_DEVICE_TOPIC = "/device/command/" + TEST_ID
DATA_DEVICE_TOPIC = "/device/data/" + TEST_ID

#服务器相关话题定义
LOGIN_SERVER_TOPIC = "/server/login/"
SIGNUP_SERVER_TOPIC = "/server/signup/"
LOGOUT_SERVER_TOPIC = "/server/logout/"
BINDING_SERVER_TOPIC = "/server/bind/"

#状态信号码定义
LOGIN_SUCCESS = "0"
WRONG_PASSWD = "1"
UNKNOWED_USERNAME = "2"
BAD_INTERNET = "3"
SERVER_REFUSED = "4"

#设备相关的配置
BINDED = 1
UNBINDED = 0
BINDED_SUCCEED = "1"
BINDED_FAILED = "0"
BINDING_WAITING_TIME = 15

