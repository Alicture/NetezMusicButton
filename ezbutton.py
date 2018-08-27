import serial
ser=serial.Serial("/dev/cu.wchusbserial14220",9600,timeout=0.5)
import os
while 1:
    data = ser.readline()
    if data==b'1\r\n':
        os.system('open "/Applications/NeteaseMusic.app"')
    if data==b'0\r\n':
        os.system('osascript -e \'tell application \"NeteaseMusic\" to quit\'')
