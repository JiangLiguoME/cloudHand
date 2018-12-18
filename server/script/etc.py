#程序配置文件
import os

ROOT_PATH , tmp = os.path.split(os.getcwd())
CODE_PATH = ROOT_PATH + "/src"
DATA_PATH = ROOT_PATH + "/data"
INFO_PATH = DATA_PATH + "/info"

BROKER_IP = '127.0.0.1'
BROKER_PORT  = 1883

LOGIN_CLIENT_TOPIC = "/client/login/"
SIGNUP_CLIENT_TOPIC = "/client/signup/"
LOGOUT_CLIENT_TOPIC = "/client/logout/"

LOGIN_SERVER_TOPIC = "/server/login/"
SIGNUP_SERVER_TOPIC = "/server/signup/"
LOGOUT_SERVER_TOPIC = "/server/logout/"

LOGIN_SUCCESS = "0"
WRONG_PASSWD = "1"
UNKNOWED_USERNAME = "2"
BAD_INTERNET = "3"
SERVER_REFUSED = "4"


