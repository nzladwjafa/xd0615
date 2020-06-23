void setup()
{
  int i;
  for(i=3;i<=9;i++)
  {
    pinMode(i, OUTPUT);
    
  }
  Serial.begin(9600);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
}
byte income=0;
void loop()
{

  digitalWrite(9,income&0x1);
  digitalWrite(3,(income>>1)&0x1);
  digitalWrite(4,(income>>2)&0x1);
  digitalWrite(5,(income>>3)&0x1);
  delay(1000);
  income++;
  if(income==10)
    income=0;

}