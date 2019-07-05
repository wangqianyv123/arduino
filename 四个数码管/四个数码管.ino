char a=HIGH;
char b=LOW;
void setup()
{
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(13, OUTPUT);
   
}
void display(int n)
{
  
  if(n>>0&0x1)
      digitalWrite(1, a);
  else
      digitalWrite(1, b);
  if(n>>1&0x1)
      digitalWrite(2, a);
  else
      digitalWrite(2, b);
  if(n>>2&0x1)
      digitalWrite(3, a);
  else 
      digitalWrite(3, b);
  if(n>>3&0x1)
      digitalWrite(4, a);
  else 
      digitalWrite(4, b);
  

}
int i=0;
int j=0;
int p=9;
int q=9;
void display1()
{   
  if(i==10){i=0;j++;} 

   if(j==10&&i==10)j=0;  
  
  if(p==-1){p=9;q--;} 

   if(q==-1&&p==-1)p=9;  
   zhongjidisplay(j,i,p,q);
         i++;
         p--;
     
}
int income=0;
void loop()
{ 
    
   display1();
 
}
void zhongjidisplay(int j,int i,int p,int q)
{
   int count=0;
  while(1)
  { 
     digitalWrite(5, a);
     digitalWrite(6, b);
     digitalWrite(7, b);
     digitalWrite(13, b);
    
  	 digitalWrite(8, b);
     display(i);
     delay(20);
     digitalWrite(8, a);
   
    
    
     digitalWrite(5, b);
     digitalWrite(6, a);
     digitalWrite(7, b);
     digitalWrite(13, b);
    
     digitalWrite(9, b);
     display(j);
     delay(20);
     digitalWrite(9, a);
    
    
    
    
     digitalWrite(5, b);
     digitalWrite(6, b);
     digitalWrite(7, a);
     digitalWrite(13, b);
    
  	 digitalWrite(10, b);
     display(p);
     delay(20);
     digitalWrite(10, a);
    
     
     digitalWrite(5, b);
     digitalWrite(6, b);
     digitalWrite(7, b);
     digitalWrite(13, a);
    
  	 digitalWrite(11, b);
     display(q);
     delay(20);
     digitalWrite(11, a);
    
      count++;
    if(count==10)break;
  
  
  }
}