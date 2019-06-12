int potpin=0;
int ledpin=11;
int val=0;
void setup()
{
  pinMode(ledpin,OUTPUT);  
  Serial.begin(9600);      //Baud Rate:9600 鮑率:9600

}
void loop()
{
  val=analogRead(potpin);   //Resistance value 電阻值
  Serial.println(val);
  analogWrite(ledpin,val/4); //Analog output 類比輸出
  delay(10);
}
