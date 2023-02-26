#define pin_6 6
#define pin_7 7

void setup() {
    pinMode(pin_6, OUTPUT);
    pinMode(pin_7, OUTPUT);
    Serial.begin(9600);
}

void loop() {
  String drc = Serial.readString();
  drive_motor("right", 150);
  delay(1000);
  drive_motor("left", 50);
}

void drive_motor(String direct, int speed) {
    if (direct == "right") {
        if (0 < speed <= 255) {
            analogWrite(pin_6, speed);
            digitalWrite(pin_6, 0);
            digitalWrite(pin_7, 1);

            delay(2000);

            analogWrite(pin_6, 0);
            analogWrite(pin_7, 0);
            digitalWrite(pin_6, 1);
            digitalWrite(pin_7, 1);
        } else {
            analogWrite(pin_6, 0);
            analogWrite(pin_7, 0);
            digitalWrite(pin_6, 1);
            digitalWrite(pin_7, 1);
        }
    } else if (direct == "left") {
        if (0 < speed <= 255) {
            analogWrite(pin_6, speed);
            digitalWrite(pin_6, 1);
            digitalWrite(pin_7, 0);

            delay(2000);

            analogWrite(pin_6, 0);
            analogWrite(pin_7, 0);
            digitalWrite(pin_6, 1);
            digitalWrite(pin_7, 1);
        } else {
            analogWrite(pin_6, 0);
            analogWrite(pin_7, 0);
            digitalWrite(pin_6, 1);
            digitalWrite(pin_7, 1);
        }
    }
}
