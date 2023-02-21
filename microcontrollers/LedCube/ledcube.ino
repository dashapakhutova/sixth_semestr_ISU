#define led_pin1 7
#define led_pin2 2
#define led_pin3 3
#define led_pin4 4
#define led_pin5 5
#define led_pin6 6
int led_on;
void setup() {
  Serial.begin(9600);
  pinMode(led_pin1, OUTPUT);
  pinMode(led_pin2, OUTPUT);
  pinMode(led_pin3, OUTPUT);
  pinMode(led_pin4, OUTPUT);
  pinMode(led_pin5, OUTPUT);
  pinMode(led_pin6, OUTPUT);
}

void loop() {
  if (led_on == 13) {
    digitalWrite(led_pin1, 0);
    digitalWrite(led_pin2, 0);
    digitalWrite(led_pin3, 0);
    digitalWrite(led_pin4, 0);
    digitalWrite(led_pin5, 0);
    digitalWrite(led_pin6, 0);
    digitalWrite(led_pin1, 1);
    digitalWrite(led_pin6, 1);
    delay(5);
    digitalWrite(led_pin3, 1);
    digitalWrite(led_pin6, 1);
    delay(5);
  }
  if (led_on == 24) {
    digitalWrite(led_pin1, 0);
    digitalWrite(led_pin2, 0);
    digitalWrite(led_pin3, 0);
    digitalWrite(led_pin4, 0);
    digitalWrite(led_pin5, 0);
    digitalWrite(led_pin6, 0);
    digitalWrite(led_pin2, 1);
    digitalWrite(led_pin6, 1);
    delay(5);
    digitalWrite(led_pin4, 1);
    digitalWrite(led_pin6, 1);
    delay(5);
  }
  if (led_on == 57) {
    digitalWrite(led_pin1, 0);
    digitalWrite(led_pin2, 0);
    digitalWrite(led_pin3, 0);
    digitalWrite(led_pin4, 0);
    digitalWrite(led_pin5, 0);
    digitalWrite(led_pin6, 0);
    digitalWrite(led_pin1, 1);
    digitalWrite(led_pin5, 1);
    delay(5);
    digitalWrite(led_pin3, 1);
    digitalWrite(led_pin5, 1);
    delay(5);
  }
  if (led_on == 68) {
    digitalWrite(led_pin1, 0);
    digitalWrite(led_pin2, 0);
    digitalWrite(led_pin3, 0);
    digitalWrite(led_pin4, 0);
    digitalWrite(led_pin5, 0);
    digitalWrite(led_pin6, 0);
    digitalWrite(led_pin2, 1);
    digitalWrite(led_pin5, 1);
    delay(5);
    digitalWrite(led_pin4, 1);
    digitalWrite(led_pin5, 1);
    delay(5);

  }
  led_on = Serial.parseInt();
  if (led_on == 1) {
    digitalWrite(led_pin1, 1);
    digitalWrite(led_pin6, 1);
    delay(2000);
    digitalWrite(led_pin1, 0);
    digitalWrite(led_pin6, 0);
  } 
  else if (led_on == 2) {
    digitalWrite(led_pin2, 1);
    digitalWrite(led_pin6, 1);
    delay(2000);
    digitalWrite(led_pin2, 0);
    digitalWrite(led_pin6, 0);
  } 
  else if (led_on == 3) {
    digitalWrite(led_pin3, 1);
    digitalWrite(led_pin6, 1);
    delay(2000);
    digitalWrite(led_pin3, 0);
    digitalWrite(led_pin6, 0);
  } 
  else if (led_on == 4) {
    digitalWrite(led_pin4, 1);
    digitalWrite(led_pin6, 1);
    delay(2000);
    digitalWrite(led_pin4, 0);
    digitalWrite(led_pin6, 0);
  } 
  else if (led_on == 5) {
    digitalWrite(led_pin1, 1);
    digitalWrite(led_pin5, 1);
    delay(2000);
    digitalWrite(led_pin1, 0);
    digitalWrite(led_pin5, 0);
  } 
  else if (led_on == 6) {
    digitalWrite(led_pin2, 1);
    digitalWrite(led_pin5, 1);
    delay(2000);
    digitalWrite(led_pin2, 0);
    digitalWrite(led_pin5, 0);
  } 
  else if (led_on == 7) {
    digitalWrite(led_pin3, 1);
    digitalWrite(led_pin5, 1);
    delay(2000);
    digitalWrite(led_pin3, 0);
    digitalWrite(led_pin5, 0);
  } 
  else if (led_on == 8) {
    digitalWrite(led_pin4, 1);
    digitalWrite(led_pin5, 1);
    delay(2000);
    digitalWrite(led_pin4, 0);
    digitalWrite(led_pin5, 0);
  } 
  else if (led_on == 12) {
    digitalWrite(led_pin1, 1);
    digitalWrite(led_pin2, 1);
    digitalWrite(led_pin6, 1);
    delay(2000);
    digitalWrite(led_pin1, 0);
    digitalWrite(led_pin2, 0);
    digitalWrite(led_pin6, 0);
  }
  else if (led_on == 14) {
    digitalWrite(led_pin1, 1);
    digitalWrite(led_pin4, 1);
    digitalWrite(led_pin6, 1);
    delay(2000);
    digitalWrite(led_pin1, 0);
    digitalWrite(led_pin4, 0);
    digitalWrite(led_pin6, 0);
  }
  else if (led_on == 15) {
    digitalWrite(led_pin1, 1);
    delay(2000);
    digitalWrite(led_pin1, 0);
  }
  else if (led_on == 23) {
    digitalWrite(led_pin2, 1);
    digitalWrite(led_pin3, 1);
    digitalWrite(led_pin6, 1);
    delay(2000);
    digitalWrite(led_pin2, 0);
    digitalWrite(led_pin3, 0);
    digitalWrite(led_pin6, 0);
  }
  else if (led_on == 26) {
    digitalWrite(led_pin2, 1);
    delay(2000);
    digitalWrite(led_pin2, 0);
  }
  else if (led_on == 34) {
    digitalWrite(led_pin3, 1);
    digitalWrite(led_pin4, 1);
    digitalWrite(led_pin6, 1);
    delay(2000);
    digitalWrite(led_pin3, 0);
    digitalWrite(led_pin4, 0);
    digitalWrite(led_pin6, 0);
  }
  else if (led_on == 37) {
    digitalWrite(led_pin3, 1);
    delay(2000);
    digitalWrite(led_pin3, 0);
  }
  else if (led_on == 48) {
    digitalWrite(led_pin4, 1);
    delay(2000);
    digitalWrite(led_pin4, 0);
  }
  else if (led_on == 56) {
    digitalWrite(led_pin1, 1);
    digitalWrite(led_pin2, 1);
    digitalWrite(led_pin5, 1);
    delay(2000);
    digitalWrite(led_pin1, 0);
    digitalWrite(led_pin2, 0);
    digitalWrite(led_pin5, 0);
  }
  else if (led_on == 58) {
    digitalWrite(led_pin1, 1);
    digitalWrite(led_pin4, 1);
    digitalWrite(led_pin5, 1);
    delay(2000);
    digitalWrite(led_pin1, 0);
    digitalWrite(led_pin4, 0);
    digitalWrite(led_pin5, 0);
  }
  else if (led_on == 67) {
    digitalWrite(led_pin2, 1);
    digitalWrite(led_pin3, 1);
    digitalWrite(led_pin5, 1);
    delay(2000);
    digitalWrite(led_pin2, 0);
    digitalWrite(led_pin3, 0);
    digitalWrite(led_pin5, 0);
  }
  else if (led_on == 78) {
    digitalWrite(led_pin3, 1);
    digitalWrite(led_pin4, 1);
    digitalWrite(led_pin5, 1);
    delay(2000);
    digitalWrite(led_pin3, 0);
    digitalWrite(led_pin4, 0);
    digitalWrite(led_pin5, 0);
  } 
  else if (led_on == 123) {
    digitalWrite(led_pin1, 1);
    digitalWrite(led_pin2, 1);
    digitalWrite(led_pin3, 1);
    digitalWrite(led_pin6, 1);
    delay(2000);
    digitalWrite(led_pin1, 0);
    digitalWrite(led_pin2, 0);
    digitalWrite(led_pin3, 0);
    digitalWrite(led_pin6, 0);
  }
  else if (led_on == 567) {
    digitalWrite(led_pin1, 1);
    digitalWrite(led_pin2, 1);
    digitalWrite(led_pin3, 1);
    digitalWrite(led_pin5, 1);
    delay(2000);
    digitalWrite(led_pin1, 0);
    digitalWrite(led_pin2, 0);
    digitalWrite(led_pin3, 0);
    digitalWrite(led_pin5, 0);
  }
  else if (led_on == 1234) {
    digitalWrite(led_pin1, 1);
    digitalWrite(led_pin2, 1);
    digitalWrite(led_pin3, 1);
    digitalWrite(led_pin4, 1);
    digitalWrite(led_pin6, 1);
    delay(2000);
    digitalWrite(led_pin1, 0);
    digitalWrite(led_pin2, 0);
    digitalWrite(led_pin3, 0);
    digitalWrite(led_pin4, 0);
    digitalWrite(led_pin6, 0);
  }
  else if (led_on == 5678) {
    digitalWrite(led_pin1, 1);
    digitalWrite(led_pin2, 1);
    digitalWrite(led_pin3, 1);
    digitalWrite(led_pin4, 1);
    digitalWrite(led_pin5, 1);
    delay(2000);
    digitalWrite(led_pin1, 0);
    digitalWrite(led_pin2, 0);
    digitalWrite(led_pin3, 0);
    digitalWrite(led_pin4, 0);
    digitalWrite(led_pin5, 0);
  }
  else if (led_on == 18) {
    digitalWrite(led_pin1, 1);
    digitalWrite(led_pin2, 1);
    digitalWrite(led_pin3, 1);
    digitalWrite(led_pin4, 1);
    delay(2000);
    digitalWrite(led_pin1, 0);
    digitalWrite(led_pin2, 0);
    digitalWrite(led_pin3, 0);
    digitalWrite(led_pin4, 0);
  }
}
