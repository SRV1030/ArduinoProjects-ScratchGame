 int i1=0;
int i2=0;
int i3=0;
void right()
{digitalWrite(11,HIGH);
digitalWrite(12,LOW);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);}
void left()
{digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);}
void fort()
{ digitalWrite(11,HIGH);
digitalWrite(12,LOW);
digitalWrite(7,LOW);
digitalWrite(8,HIGH); }
void setup(){
pinMode(2,INPUT);
pinMode(4,INPUT);
pinMode(3,INPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);}
void loop()
{i1=digitalRead(2);
 i2=digitalRead(3);
 i3=digitalRead(4);
if (i1==LOW && i2==HIGH && i3==LOW)
{ fort(); }  
else if (i1==LOW && i2==LOW && i3==HIGH)
{ right(); } 
else if (i1==HIGH && i2==HIGH && i3==LOW)
{left(); } 
else if (i1==LOW && i2==HIGH && i3==HIGH)
{ right(); }
else if (i1==HIGH && i2==LOW && i3==LOW)
{left(); }
else  if (i1==LOW && i2==LOW && i3==LOW)
{digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);}
 else if (i1==HIGH && i2==HIGH && i3==HIGH)
{ fort(); }}

