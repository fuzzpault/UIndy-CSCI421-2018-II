import os
from socket import *
host = "172.16.16.20" # "127.0.0.1"
port = 8080
addr = (host,port)
UDPSock = socket(AF_INET, SOCK_DGRAM)
while True:
    #data = input("Enter message or type 'exit'")
    data = raw_input("Enter message or type 'exit'")
    #data = data.encode('utf-8')
    UDPSock.sendto(data, addr)
    if data == "exit":
        break

UDPSock.close()
os._exit(0)