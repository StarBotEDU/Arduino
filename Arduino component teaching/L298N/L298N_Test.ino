const int In1 = 4; //digital pin 4 of Arduino Left Motor
const int In2 = 5; //digital pin 5 of Arduino
const int In3 = 6; //digital pin 6 of Arduino Right Motor
const int In4 = 7; //digital pin 7 of Arduino
void setup()
{
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);    
}
void loop()
{
  Forward();
  delay(2000);
  Stop();
  delay(500);
  Back();
  delay(2000);
  Stop();
  delay(500);
  Left();
  delay(2000);
  Stop();
  delay(500);
  Right();
  delay(2000);
  Stop();
  delay(500);
}
void Stop()
{
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
}
void Forward()
{
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
}
void Back()
{
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
}
void Left()
{
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
}
void Right()
{
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
}
