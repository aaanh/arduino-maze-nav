int motorA1 = 5;
int motorA2 = 6;
int motorB1 = 9;
int motorB2 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorB2, HIGH);
  delay(20);

  digitalWrite(motorA1, LOW);
  digitalWrite(motorB2, LOW);
  delay(20);
}
