char a=HIGH;
char b=LOW;
void display(int n)
{
   	  digitalWrite(6, b);
  
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
  
 	  digitalWrite(6, a);
}
void setup()
{
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
     pinMode(6, OUTPUT);
    Serial.begin(9600);
}
int income=0;
void loop()
{ 
  
  if(Serial.available())
  {
    
  	Serial.println(income=Serial.read()-48);
    display(income);
  }
  
	
}