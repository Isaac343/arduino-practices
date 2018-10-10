import serial                                # add Serial library for Serial communication

ard_ser = serial.Serial('/dev/ttyACM0',9600)#Create Serial port object called arduinoSerialData
print (ard_ser.readline())                  #read the serial data and print it as line
print ("Enter 1 to ON LED and 0 to OFF LED")

while 1:                                    #infinite loop
    input_data = input('number: ')          #waits until user enters data
    print ("you entered", input_data)       #prints the data for confirmation

    if (input_data == '1'):                 #if the entered data is 1
        ard_ser.write(b'1')                    #send 1 to arduino
        print ("LED ON")


    if (input_data == '0'):                 #if the entered data is 0
        ard_ser.write(b'0')                    #send 0 to arduino
        print ("LED OFF")
