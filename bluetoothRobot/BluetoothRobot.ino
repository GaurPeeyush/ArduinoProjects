void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    int dataa = Serial.read();
    Serial.println(dataa);
    if( dataa ==1)
       digitalWrite(13,1);
    else
       digitalWrite(13,0);
  }
  delay(1000);
}
