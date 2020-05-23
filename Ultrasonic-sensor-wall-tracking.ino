#define e1 A5
#define t1 A4 
#define e2 A3
#define t2 A2
#define e3 A1
#define t3 A0 
#define L1 3
#define L2 5
#define M1 6
#define M2 9
void f()
{analogWrite(L1,153);
analogWrite(L2,0);
analogWrite(M1,0);
analogWrite(M2,153);}
void r()
{analogWrite(L1,153);
analogWrite(L2,0);
analogWrite(M1,148);
analogWrite(M2,0);}
void rt()
{analogWrite(L1,0);
analogWrite(L2,0);
analogWrite(M1,153);
analogWrite(M2,0);}
void l()
{analogWrite(L1,0);
analogWrite(L2,148);
analogWrite(M1,0);
analogWrite(M2,153);}
void lt()
{analogWrite(L1,0);
analogWrite(L2,153);
analogWrite(M1,0);
analogWrite(M2,0);}
void fw()
{analogWrite(L1,255);
analogWrite(L2,0);
analogWrite(M1,0);
analogWrite(M2,255);}
void bk()
{analogWrite(L1,0);
analogWrite(L2,153);
analogWrite(M1,153);
analogWrite(M2,0);}
void setup()
{Serial.begin(9600);
pinMode(t1, OUTPUT);
pinMode(e1, INPUT);
pinMode(t2, OUTPUT);
pinMode(e2, INPUT);
pinMode(t3, OUTPUT);
pinMode(e3, INPUT);
pinMode(L1, OUTPUT);
pinMode(L2, OUTPUT);
pinMode(M1, OUTPUT);
pinMode(M2, OUTPUT);}
void loop()
{float d1,di1,d2,di2,d3,di3;
digitalWrite(t1, HIGH);
delay(100);
digitalWrite(t1, LOW);
d1=pulseIn(e1, HIGH);
di1= (d1/2)*0.034;
Serial.print(" di1: ");
Serial.println(di1);
digitalWrite(t2, HIGH);
delay(100);
digitalWrite(t2, LOW);
d2=pulseIn(e2, HIGH);
di2= (d2/2)*0.034;
Serial.print(" di2: ");
Serial.println(di2);
digitalWrite(t3, HIGH);
delay(100);
digitalWrite(t3, LOW);
d3=pulseIn(e3, HIGH);
di3= (d3/ 2)*0.034;
Serial.print(" di3: ");
Serial.println(di3);
if ( di1<11.5 && di2>=34.5 && di3>14) 
{bk();
delay(200);
rt();
delay(150);
f();
delay(200);
fw();}
else if ( di1>14 && di2>=34.5 && di3<11.5) 
{bk();
delay(200);
lt();
delay(150);
f();
delay(200);
fw();}
else if ( di1<=14 && di2<34.5 && di3>14) 
{bk();
delay(200);
r();
delay(421);
f();}
else if ( di1>14 && di2<34.5 && di3<=14) 
{bk();
delay(200);
l();
delay(421);
f();}
else if ( di1>14 && di2<34.5 && di3>14) 
{if (di1>di3)
{bk();
delay(200);
l();
delay(421);
f();}
else if (di1<di3)
{bk();
delay(200);
r();
delay(421);
f();;}}
else
{fw();}}
    
