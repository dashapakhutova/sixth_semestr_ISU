#define btn_pin1 3
#define btn_pin2 4
#define btn_pin3 5
#define btn_pin4 6


bool lastButton = LOW;

void setup() {
  Serial.begin(9600);
  pinMode(btn_pin1, INPUT);
  pinMode(btn_pin2, INPUT);
  pinMode(btn_pin3, OUTPUT);
  pinMode(btn_pin4, OUTPUT);
}

void loop() {
  digitalWrite(btn_pin3, 1);
  int btnState = debounced(btn_pin1);
  int btnState2 = debounced(btn_pin2);
  digitalWrite(btn_pin3, 0);

  //1
  if (lastButton == LOW && btnState == HIGH && btnState2 == LOW) {
    Serial.print("1\n");
  }
  lastButton = btnState;

  //2
  if (lastButton == LOW && btnState2 == HIGH && btnState == LOW) {
    Serial.print("2\n");
  }
  lastButton = btnState2;

  //1 и 2
  if (lastButton == HIGH && btnState == HIGH && btnState == HIGH) {
    Serial.print("1 and 2\n");
  }
  lastButton = LOW;

  digitalWrite(btn_pin4, 1);
  int btnState3 = debounced(btn_pin1);
  int btnState4 = debounced(btn_pin2);
  digitalWrite(btn_pin4, 0);  

  // 3
  if (lastButton == LOW && btnState3 == HIGH && btnState4 == LOW) {
    Serial.print("3\n");
  }
  lastButton = btnState3;

  //4
  if (lastButton == LOW && btnState4 == HIGH && btnState3 == LOW) {
    Serial.print("4\n");
  }
  lastButton = btnState4;

  //3 4
  if (lastButton == HIGH && btnState3 == HIGH && btnState4 == HIGH) {
    Serial.print("3 and 4\n");
  }
  lastButton = LOW;
}

// обработка дребезга
bool debounced(int pin) {
  bool current = digitalRead(pin);
  if (current != lastButton) {
    delay(10);
    current = digitalRead(pin);
  }
  return current;
}
