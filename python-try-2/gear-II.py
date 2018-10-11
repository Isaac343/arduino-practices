import serial                                # add Serial library for Serial communication

ard_ser = serial.Serial('/dev/ttyACM0',9600)#Create Serial port object called arduinoSerialData
print (ard_ser.readline())                  #read the serial data and print it as line
print ("Enter 1 to ON LED and 0 to OFF LED")

while 1:                                    #infinite loop
    data = int(input('number: '))          #waits until user enters data
           #prints the data for confirmation

    if (data <= 255):
        ard_ser.write(data)
        print ("you entered", data)
    else:
        ard_ser.write(b'0')
        print('Valor no permitido')
