char c;
void setup()
{Serial.begin(9600);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(2,OUTPUT); 
 pinMode(3,OUTPUT);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3, LOW);
 Serial.println("ready then type the order r/l/f/b/p");
}

void loop()
{
  if(Serial.available()>0);
  {c=Serial.read();
    switch(c)
    {case'f':
     digitalWrite(4, HIGH);digitalWrite(5, LOW);digitalWrite(3, HIGH);digitalWrite(2, LOW);
     Serial.println("front");break;
     case'b':
     digitalWrite(4, LOW);digitalWrite(5, HIGH);digitalWrite(3, LOW);digitalWrite(2, HIGH);
     Serial.println("back");break;
     case'r':
     digitalWrite(4, HIGH);digitalWrite(5, LOW);digitalWrite(3,LOW);digitalWrite(2, HIGH);
     Serial.println("right");break;
     case'l':
     digitalWrite(4, LOW);digitalWrite(5, HIGH);digitalWrite(3, HIGH);digitalWrite(2, LOW);
     Serial.println("left");break;
     case'p':
     digitalWrite(4, LOW);digitalWrite(5, LOW);digitalWrite(3, LOW);digitalWrite(2, LOW);
     Serial.println("pause");break;
     default:break;
     }
   }
 
}