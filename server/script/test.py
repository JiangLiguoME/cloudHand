import session
import time

s = session.Session()
s.run()
while True:
    s.client.publish("/test",b"liguo")
    time.sleep(1)

