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
  
    
}
byte income=0;
int i=8;
void loop()
{
  if(Serial.available()>0)
  { 
    income=Serial.read();
    income=income-'0';
    if(i%4==0)
    {
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
    }
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
    delay(1);
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
    delay(1);
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
    delay(1);
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
    delay(1);
    digitalWrite(i,HIGH);
    i+=1;
  }
}