#include <MsTimer2.h>     //定时器库的头文件

int x=0;

void onTimer()
{
  if(x==10)
    x=0;
  digitalWrite(4,x&0x1);
      digitalWrite(5,(x>>1)&0x1);
      digitalWrite(6,(x>>2)&0x1);
      digitalWrite(7,(x>>3)&0x1);
   x++;
}
void myfunc()
{
	x=0;
}

void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  
  MsTimer2::set(1000, onTimer); //设置中断，每1000ms进入一次中断服务程序 onTimer()
  MsTimer2::start(); //开始计时
 
  attachInterrupt( digitalPinToInterrupt(2), myfunc, CHANGE);
}

void loop()
{
	
}