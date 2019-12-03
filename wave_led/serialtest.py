import serial


ser = serial.Serial('COM3', 9600)  # Start serial communication
while True:
    data = ser.readline()  # Wait for line from Arduino and read it
    print(data[0])  # Print the line to the console