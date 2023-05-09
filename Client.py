import socket
clientSocket=socket.socket()
port=13041
clientSocket.connect(('127.0.0.1',port))
print(clientSocket.recv(1024).decode())
clientSocket.close()
