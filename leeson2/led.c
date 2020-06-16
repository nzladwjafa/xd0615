void setup()
{
  int i;
  for(i=0;i<=7;i++)
  pinMode(i, OUTPUT);
}

void loop()
{
  int i;
  for(i=0;i<=7;i++)
  {
    if(i%3==0)
    {
  		digitalWrite(i, HIGH);
  		delay(1); // Wait for 1000 millisecond(s)
  		digitalWrite(i, LOW);
  		delay(1); // Wait for 1000 millisecond(s)
    }
    else if(i%3==1)
    {
        digitalWrite(i, HIGH);
  		delay(300); // Wait for 1000 millisecond(s)
  		digitalWrite(i, LOW);
  		delay(300); // Wait for 1000 millisecond(s)
    }
    else
      {
        digitalWrite(i, HIGH);
  		delay(1000); // Wait for 1000 millisecond(s)
  		digitalWrite(i, LOW);
  		delay(1000); // Wait for 1000 millisecond(s)
    }
  }
}