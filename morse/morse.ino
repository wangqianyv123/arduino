class Morse//定义类
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};






Morse::Morse(int pin)//定义属性
{
	pinMode(pin,OUTPUT);
	_pin=pin;
}





void Morse::dot()//定义方法
{
	digitalWrite(_pin,HIGH);
	delay(250);
	digitalWrite(_pin,LOW);
	delay(250);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(1000);
	digitalWrite(_pin,LOW);
	delay(250);
}





Morse morse(13);//初始化

void setup() {

  // put your setup code here, to run once:

  Serial.begin(9600);

}






int t;//循环接收

void loop() {

  // put your main code here, to run repeatedly:

  t=Serial.read();
  if(Serial.available())
  {

    display(t);  

  }
  delay(1200); 

}





void display(int t){
switch(t)
{
 
 case 'a':
    Serial.println("*- ");

    morse.dot();

    morse.dash();break;

  case 'b':
    
    Serial.println("-*** ");

    morse.dash();

    morse.dot();

    morse.dot();

    morse.dot();break;


 case 'c':

    Serial.println("-*-* ");

    morse.dash();

    morse.dot();

    morse.dash();

    morse.dot();break;


 case 'd':

    Serial.println("-** ");

    morse.dash();

    morse.dot();

    morse.dot();break;

 case 'e':

    Serial.println("* ");

    morse.dot();break;

  

case 'f':

    Serial.println("**-* ");

    morse.dot();

    morse.dot();

    morse.dash();

    morse.dot();break;

  
case 'g':

    Serial.println("--* ");

    morse.dash();

    morse.dash();

    morse.dot();break;

  

case 'h':

    Serial.println("**** ");

    morse.dot();

    morse.dot();

    morse.dot();

    morse.dot();break;

 

case 'i':

    Serial.println("** ");

    morse.dot();

    morse.dot();break;
  

case 'j':

    Serial.println("*--- ");

    morse.dot();

    morse.dash();

    morse.dash();

    morse.dash();break;

 

case 'k':

    Serial.println("-*- ");

    morse.dash();

    morse.dot();

    morse.dash();break;

 

case 'l':

    Serial.println("*-** ");

    morse.dot();

    morse.dash();

    morse.dot();

    morse.dot();break;

  

case 'm':

    Serial.println("-- ");

    morse.dash();

    morse.dash();break;

  

case 'n':

    Serial.println("-* ");

    morse.dash();

    morse.dot();break;

  

case 'o':

    Serial.println("--- ");

    morse.dash();

    morse.dash();

    morse.dash();break;

  

 case 'p':

    Serial.println("*--* ");

    morse.dot();

    morse.dash();

    morse.dash();

    morse.dot();break;

  

case 'q':

    Serial.println("--*- ");

    morse.dash();

    morse.dash();

    morse.dot();

    morse.dash();break;

  
case 'r':
    Serial.println("*-* ");

    morse.dot();

    morse.dash();

    morse.dot();break;

  

case 's':

    Serial.println("*** ");

    morse.dot();

    morse.dot();

    morse.dot();break;

  

case 't':

    Serial.println("- ");

    morse.dash();break;

  

case 'u':

    Serial.println("**- ");

    morse.dot();

    morse.dot();

    morse.dash();break;

  

case 'v':

    Serial.println("***- ");

    morse.dot();

    morse.dot();

    morse.dot();

    morse.dash();break;

  

 case 'w':

    Serial.println("*-- ");

    morse.dot();

    morse.dash();

    morse.dash();break;

  

case 'x':
    Serial.println("-**- ");

    morse.dash();

    morse.dot();

    morse.dot();

    morse.dash();break;

  

case 'y':

    Serial.println("-*-- ");

    morse.dash();

    morse.dot();

    morse.dash();

    morse.dash();break;

  

 case 'z':

    Serial.println("--** ");

    morse.dash();

    morse.dash();

    morse.dot();

    morse.dot();break;

  

case ' ':

    Serial.println("/");

    delay(100);break;

  }

}
