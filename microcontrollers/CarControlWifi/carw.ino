// Направление
#define motor_left_direction 4
#define motor_right_direction 7

// Скорость
#define motor_left_speed 5
#define motor_right_speed 6

bool forward = false;
bool right = false;
bool left = false;
bool stop = true;

void setup() {
  Serial.begin(115200);
  pinMode(motor_left_direction, OUTPUT);
  pinMode(motor_right_direction, OUTPUT);
  pinMode(motor_left_speed, OUTPUT);
  pinMode(motor_right_speed, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    String data = Serial.readStringUntil('\n');
    data.trim();
    get_direction(data);
    drive();
  }
}

void get_direction(String data) {
  if (data == 'f') {
    forward = true;
    right = false;
    left = false;
    stop = false;
  } else if (data == 'r') {
    forward = false;
    right = true;
    left = false;
    stop = false;
  } else if (data == 'l') {
    forward = false;
    right = false;
    left = true;
    stop = false;
  } else if (data == 's') {
    forward = false;
    right = false;
    left = false;
    stop = true;
  }
}

// Направление
// #define motor_left_direction 4
// #define motor_right_direction 7

// // Скорость
// #define motor_left_speed 5
// #define motor_right_speed 6

void drive() {
  if (forward) {
    analogWrite(motor_left_speed, 200);
    digitalWrite(motor_left_direction, LOW);
    analogWrite(motor_right_speed, 250);
    digitalWrite(motor_right_direction, LOW);
  } else if (right) {
    analogWrite(motor_left_speed, 200);
    digitalWrite(motor_left_direction, HIGH);
    analogWrite(motor_right_speed, 250);
    digitalWrite(motor_right_direction, LOW);
  } else if (left) {
    analogWrite(motor_left_speed, 200);
    digitalWrite(motor_left_direction, LOW);
    analogWrite(motor_right_speed, 250);
    digitalWrite(motor_right_direction, HIGH);
  } else if (stop) {
    digitalWrite(motor_left_speed, LOW);
    digitalWrite(motor_left_direction, LOW);
    digitalWrite(motor_right_speed, LOW);
    digitalWrite(motor_right_direction, LOW);
  }
}
