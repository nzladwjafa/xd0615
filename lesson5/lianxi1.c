void setup()
{
  int i;
  for(i=2;i<11;i++)
  {
  	pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
    
}
byte income=0;
void loop()
{
  if(Serial.available()>0)
  { 
    income=Serial.read();
    income=income-'0';
    digitalWrite(11,LOW);
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
    delay(10);
  }
}