int t = 100;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  pinMode(3, INPUT);
  pinMode(5, INPUT);
}

void loop()
{
  // if button press on A0 is detected
  if (digitalRead(A0) == HIGH) {
    tone(8, 240, t); // sa
  }
  // if button press on A1 is detected
  if (digitalRead(A1) == HIGH) {
    tone(8, 270, t); // re
  }
  // if button press on A0 is detected
  if (digitalRead(A2) == HIGH) {
    tone(8, 300, t); // ga
  }
  // if button press on A3 is detected
  if (digitalRead(A3) == HIGH) {
    tone(8, 320, t); // ma
  }
  // if button press on A4 is detected
  if (digitalRead(A4) == HIGH) {
    tone(8, 360, t); // pa
  }
  // if button press on A5 is detected
  if (digitalRead(A5) == HIGH) {
    tone(8, 400, t); // dha
  }
  // if button press on 3 is detected
  if (digitalRead(3) == HIGH) {
    tone(8, 450, t); // ni
  }
  // if button press on 5 is detected
  if (digitalRead(5) == HIGH) {
    tone(8, 480, t); // sa
  }
  delay(10); // Delay a little bit to improve simulation performance
}