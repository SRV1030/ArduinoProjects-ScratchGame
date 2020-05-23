char str[2];
char c;
char z;
int i1=0;
int i2=0;
int i3=0;
int i4=0;
int i5=0;
void fw()
{analogWrite(5,255);
analogWrite(6,LOW);
analogWrite(3,LOW);
analogWrite(11,255);}
void rt()
{analogWrite(5,150);
analogWrite(6,LOW);
analogWrite(3,150);
analogWrite(11,LOW);}
void lt()
{analogWrite(5,LOW);
analogWrite(6,150);
analogWrite(3,LOW);
analogWrite(11,150);}
void ft()
{analogWrite(5,190);
analogWrite(6,LOW);
analogWrite(3,LOW);
analogWrite(11,190);}
void bk()
{analogWrite(5,LOW);
analogWrite(6,125);
analogWrite(3,125);
analogWrite(11,LOW);}
void stop()
{analogWrite(5,LOW);
analogWrite(6,LOW);
analogWrite(3,LOW);
analogWrite(11,LOW);}
void ltr()
{st:
i1=digitalRead(7);
i2=digitalRead(8);
i3=digitalRead(9);
i4=digitalRead(10);
i5=digitalRead(13);
char z= Serial.read();
if (z== 'v')
{stop();}
else if (i1==HIGH && i2==HIGH && i3==HIGH && i4==HIGH && i5==HIGH)
{stop();
digitalWrite(2,HIGH);
delay(2000);
digitalWrite(2,LOW);}
else if (i1==LOW && i2==LOW && i3==HIGH && i4==LOW && i5==LOW )
{ft();
goto st;}
else if (i1==LOW && i2==HIGH && i3==HIGH && i4==LOW && i5==LOW )
{ft(); 
goto st;}
else if (i1==LOW && i2==LOW && i3==HIGH && i4==HIGH && i5==LOW )
{ft(); 
goto st;}
else if (i1==HIGH && i2==LOW && i3==HIGH && i4==LOW && i5==HIGH) 
{ft();
goto st;}
else if (i1==LOW && i2==LOW && i3==HIGH && i4==LOW && i5==HIGH)
{ft();
goto st;}
else if (i1==HIGH && i2==LOW && i3==HIGH && i4==LOW && i5==LOW)
{ft();
goto st;}
else if (i1==LOW && i2==HIGH && i3==HIGH && i4==HIGH && i5==LOW )
{ft();
goto st;}
else if (i1==LOW && i2==LOW && i3==LOW && i4==LOW && i5==HIGH)
{rt();
goto st;}
else if (i1==LOW && i2==LOW && i3==LOW && i4==HIGH && i5==HIGH)
{rt();
goto st;}
else if (i1==LOW && i2==LOW && i3==HIGH && i4==HIGH && i5==HIGH)
{rt();
goto st;}
else if (i1==LOW && i2==LOW && i3==HIGH && i4==HIGH && i5==LOW)
{rt();
goto st;}
else if (i1==LOW && i2==LOW && i3==LOW && i4==HIGH && i5==LOW)
{rt();
goto st;}
else if (i1==HIGH && i2==LOW && i3==LOW && i4==LOW && i5==LOW )
{lt();
goto st;} 
else if (i1==HIGH && i2==HIGH && i3==LOW && i4==LOW && i5==LOW )
{lt();
goto st;}
else if (i1==HIGH && i2==HIGH && i3==HIGH && i4==LOW && i5==LOW )
{lt();
goto st;}
else if (i1==LOW && i2==HIGH && i3==HIGH && i4==LOW && i5==LOW )
{lt();
goto st;}
else if (i1==LOW && i2==HIGH && i3==LOW && i4==LOW && i5==LOW )
{lt();
goto st;}
else if (i1==LOW && i2==LOW && i3==LOW && i4==LOW && i5==LOW)
{bk();
goto st;}
 else 
{goto st;}}
void setup(){
Serial.begin(9600);
pinMode(7,INPUT);
pinMode(8,INPUT);
pinMode(9,INPUT);
pinMode(10,INPUT);
pinMode(13,INPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(11,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);}
void loop()
{while(Serial.available())
{char c=Serial.read();
if(c=='V')
{ltr();}
else if(c=='F')
{fw();
break;}
else if(c=='L')
{lt();
break;}
else if(c=='R')
{rt();
break;}
else if(c=='B')
{bk();
break;}
else if(c=='G')
{lt();
break;}
else if(c=='I')
{rt();
break;}
else if(c=='S')
{stop();
break;}}}

