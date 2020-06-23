void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);



  Serial.begin(9600);
}
byte income=0,income1=0,income2=0,income3=0,income4=0;
void loop()
{
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10, HIGH);
  if(Serial.available()>0)
  {
   income=Serial.read();
    int a=income,b,c;
      c=a%10;
    income1=c-'0';
    digitalWrite(2,income1&0x1);
    digitalWrite(3,(income1>>1)&0x1);
    digitalWrite(4,(income1>>2)&0x1);
    digitalWrite(5,(income1>>3)&0x1);
    delay(10);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    int b2,c2;
    c2=(a/10)%10;
    income2=c2-'0';
    digitalWrite(2,income2&0x1);
    digitalWrite(3,(income2>>1)&0x1);
    digitalWrite(4,(income2>>2)&0x1);
    digitalWrite(5,(income2>>3)&0x1);
    delay(10);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    int b3,c3;
    c3=(a/100)%10;
    income3=c3-'0';
    digitalWrite(2,income3&0x1);
    digitalWrite(3,(income3>>1)&0x1);
    digitalWrite(4,(income3>>2)&0x1);
    digitalWrite(5,(income3>>3)&0x1);
    delay(10);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(9, LOW);
    int b4,c4;
    c4=(a/1000)%10;
    income4=c4-'0';
    digitalWrite(2,income4&0x1);
    digitalWrite(3,(income4>>1)&0x1);
    digitalWrite(4,(income4>>2)&0x1);
    digitalWrite(5,(income4>>3)&0x1);
    delay(10);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(8, LOW);
  }
}