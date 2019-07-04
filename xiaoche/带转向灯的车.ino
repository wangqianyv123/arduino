int temp=0;
void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}
int income=0;
void loop()
{
  if(Serial.available())
  {
    income = Serial.read();
  	switch(income)
    {
      case 'f':
      	forward();
      	break;
      case 'b':
      	backward();
        break;
      case 'l':
      	left();
      	break;
      case 'r':
      	right();
      	break;
      case 's':
      	stop();
      default:
      	break;
    }
    
    
  }
}
void forward()
{
 analogWrite(5,10);
  digitalWrite(6,LOW);
  analogWrite(9,10);
  digitalWrite(10,LOW);
}
void backward()
{
 digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
}
void left()
{
     digitalWrite(5,HIGH);
     digitalWrite(6,LOW);
     digitalWrite(10,HIGH);
     digitalWrite(9,LOW);
  while(1)
  {
 
    
     digitalWrite(12, HIGH);   
  	 delay(1000);                       
 	 digitalWrite(12, LOW);    
 	 delay(1000);
    if(Serial.available())
    {	
        income = Serial.read();
      	switch(income)
    	{
      		case 'f':
      			forward();
      		break;
      		case 'b':
      			backward();
        	break;
      		case 'l':
      			left();
      		break;
      		case 'r':
      			right();
      		break;
      		case 's':
      			stop();
      		default:
      		break;
    	}
   		break;
    }
  }  
  
    
  
}
void right()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
   while(1)
  {
 
    
     digitalWrite(13, HIGH);   
  	 delay(1000);                       
 	 digitalWrite(13, LOW);    
 	 delay(1000);
    if(Serial.available())
    {   
        income = Serial.read();
      	switch(income)
    	{
      		case 'f':
      			forward();
      		break;
      		case 'b':
      			backward();
        	break;
      		case 'l':
      			left();
      		break;
      		case 'r':
      			right();
      		break;
      		case 's':
      			stop();
      		default:
      		break;
    	}
   		break;
    }
   }
}
void stop()
{
 digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}



