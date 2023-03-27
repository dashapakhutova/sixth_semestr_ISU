import machine
import time

class CarController:
    def __init__(self, serial_port='/dev/ttyUSB0', baud_rate=115200):
        self.ser = machine.UART(0, baud_rate)
        self.ser.init(baudrate=baud_rate, bits=8, parity=None, stop=1, tx=machine.Pin(1), rx=machine.Pin(3))

    def forward(self):
        command = "f"
        self.ser.write(command + '\n')
        time.sleep(0.1)
        
    def turn_left(self, speed):
        command = "l"
        self.ser.write(command + '\n')
        time.sleep(0.1)
        
    def turn_right(self, speed):
        command = "r"
        self.ser.write(command + '\n')
        time.sleep(0.1)
        
    def stop(self):
        command = "s"
        self.ser.write(command + '\n')
        time.sleep(0.1)

car = CarController()

# car.forward()
# car.stop()
# car.turn_right()
