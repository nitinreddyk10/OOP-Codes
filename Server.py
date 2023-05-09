import socket
#local host program - 127.0.0.1
newSocket = socket.socket()
port=13041
newSocket.bind(('127.0.0.1',port))
print("Socket is binded")

newSocket.listen(5)
print("Socket is listening")

noOfConnections=0
while(noOfConnections<2):
    c,addr=newSocket.accept()
    print(c," ",addr)
    c.send("Connection is done".encode())
    c.close()
    noOfConnections+=1
print("Server is closed")
