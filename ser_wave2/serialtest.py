import serial

ser = serial.Serial('COM3', 9600)  # Start serial communication
while True:
    data = ser.readline()  # Wait for line from Arduino and read it
    res = data.decode()
    print(type(res))

    if res == '1\r\n':
        print('성공')
    print(res)  # Print the line to the console