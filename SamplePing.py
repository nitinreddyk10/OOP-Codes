import socket
import sys

#Create a new Socket - IPV4 or IPV6 and What kind of protocol? - Tcp/UDP
try:
    newSocket = socket.socket(socket.AF_INET , socket.SOCK_STREAM)
    print("Socket is created")
except socket.error as err:
    print("Creation error in Socket")

website="www.iiitdm.ac.in"
port = 80

try:
    host_ip = socket.gethostbyname(website)
    print(host_ip)
except socket.gaierror:
    print("Some Error in getting host ip")
    sys.exit()

newSocket.connect((host_ip,port))
print("Website is active")




