int i;
void setup()
{
  for(i=8;i<13;i++)
  {pinMode(i, OUTPUT);}
}

void loop()
{
  for(i=8;i<13;i++)
  {digitalWrite(i, HIGH);
  delay(100); 
  digitalWrite(i, LOW);
  delay(100); 
  }
}