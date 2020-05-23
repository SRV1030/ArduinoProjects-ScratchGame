char str[2];
char c;
char z;
#define L1 2
#define L2 3
#define M1 4
#define M2 5

void rt()
{digitalWrite(L1,HIGH);
digitalWrite(L2,LOW);
digitalWrite(M1,HIGH);
digitalWrite(M2,LOW);}
void lt()
{digitalWrite(L1,LOW);
digitalWrite(L2,HIGH);
digitalWrite(M1,LOW);
digitalWrite(M2,HIGH);}
void fw()
{digitalWrite(L1,HIGH);
digitalWrite(L2,LOW);
digitalWrite(M1,LOW);
digitalWrite(M2,HIGH);}
void bk()
{digitalWrite(L1,LOW);
digitalWrite(L2,HIGH);
digitalWrite(M1,HIGH);
digitalWrite(M2,LOW);}

void setup(){
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);}
void loop()
{while(Serial.available())
{char c=Serial.read();
 if(c=='u')
{fw();
break;}
else if(c=='l')
{lt();
break;}
else if(c=='r')
{rt();
break;}
else if(c=='d')
{bk();
break;}
}}

