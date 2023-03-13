#define trigPin 11
#define echoPin 10

const int sharpPin = A0;

// Мотор
// Направление
#define motor_left_direction 4
#define motor_right_direction 7

// Скорость
#define motor_left_speed 5
#define motor_right_speed 6

bool forward = false;
bool right = false;
bool left = false;

float fdDistFilt = 0;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(motor_left_direction, OUTPUT);
  pinMode(motor_right_direction, OUTPUT);
  pinMode(motor_left_speed, OUTPUT);
  pinMode(motor_right_speed, OUTPUT);
}

void loop() {
  drive();
}

float get_forward_distance() {
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  uint32_t us = pulseIn(echoPin, HIGH);

  return (us / 58.3);
}

float filter_forward_distance() {
  float dist = get_forward_distance();
  fdDistFilt += (dist - fdDistFilt) * 0.2;
  delay(50);

  return fdDistFilt;
}

float get_left_distance() {
  float volts = analogRead(sharpPin)*0.0048828125;
  float leftDist = 65*pow(volts, -1.10);

  return leftDist;
}

void get_direction() {
  float fdDistance = filter_forward_distance();
  float lfDistance = get_left_distance();

  if (fdDistance > 20 && lfDistance <= 18) {
    forward = true;
    right = false;
    left = false;
  } else if (lfDistance > 18) {
    forward = false;
    right = false;
    left = true;
  } else if (fdDistance <= 20 && lfDistance <= 18) {
    forward = false;
    right = true;
    left = false;
  }
}

void stop() {
    digitalWrite(motor_left_direction, 0);
    analogWrite(motor_left_speed, 0);
    digitalWrite(motor_right_direction, 0);
    analogWrite(motor_right_speed, 0);
    delay(100);
}

void drive() {
  if (forward) {
    digitalWrite(motor_left_direction, 0);
    analogWrite(motor_left_speed, 200);
    digitalWrite(motor_right_direction, 0);
    analogWrite(motor_right_speed, 250);
    delay(150);
  }
  if (left) {
    stop();
    digitalWrite(motor_left_direction, 1);
    analogWrite(motor_left_speed, 200);
    digitalWrite(motor_right_direction, 0);
    analogWrite(motor_right_speed, 250);
    delay(100);
  }
  if (right) {
    stop();
    digitalWrite(motor_left_direction, 0);
    analogWrite(motor_left_speed, 200);
    digitalWrite(motor_right_direction, 1);
    analogWrite(motor_right_speed, 250);
    delay(100);
  }
}
