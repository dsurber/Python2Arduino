#Python2Arduino - Send Python signal through serial
from time import sleep
import serial
ser = serial.Serial('COM4', 9600) # Establish the connection on a specific port
counter = 32 # Below 32 everything in ASCII is gibberish

print("connected to: " + ser.portstr)

while counter<50:
     
     ser.write("\x23o0 \x23f".encode('ASCII'))
     #ser.write(str(chr(counter))) # Convert the decimal number to ASCII then send it to the Arduino
     print(ser.read()) # Print and Read the newest output from the Arduino
     sleep(1) # Delay for a second
     counter +=1


print("All Done")


ser.close()


#this will store the line
#line = []

#while True:
    #for c in ser.read():
        #line.append(c)
        #if c == '\n':
            #print("Line: " + line)
            #line = []
            #break
          
#print("Line: " + line)


