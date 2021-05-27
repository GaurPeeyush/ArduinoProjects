const int trigPin= 5;
const int trigPin= 6;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600)
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // clockwise
  long duration, inches, cm;
  pinMode(trigPin,OUTPUT)
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2)
  trigPin
  forward();
  delay(5000);
  reverse();
  delay(5000);
  stop();
  delay(5000);

}
void forward()
{
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
}
void reverse()
{
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
}
void left()
{
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
}
void right()
{
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
}
void stop()
{
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
}
