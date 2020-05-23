#define m11 12    
#define m12 11
#define m21 10    
#define m22 9
char str[2],i;
void forward(){
digitalWrite(m11, LOW);
digitalWrite(m12, HIGH);
digitalWrite(m21, HIGH);
digitalWrite(m22, LOW);}
void backward()
{digitalWrite(m11, HIGH);
digitalWrite(m12, LOW);
digitalWrite(m21, LOW);
digitalWrite(m22, HIGH);}
void left(){
digitalWrite(m11, HIGH);
digitalWrite(m12, LOW);
digitalWrite(m21, HIGH);
digitalWrite(m22, LOW);}
void right(){
digitalWrite(m11, LOW);
digitalWrite(m12, HIGH);
digitalWrite(m21, LOW);
digitalWrite(m22, HIGH);}
void Stop(){
digitalWrite(m11, LOW);
digitalWrite(m12, LOW);
digitalWrite(m21, LOW);
digitalWrite(m22, LOW);}
void setup() {
Serial.begin(9600);
pinMode(m11, OUTPUT);
pinMode(m12, OUTPUT);
pinMode(m21, OUTPUT);
pinMode(m22, OUTPUT);}
void loop(){
while(Serial.available())
{char ch=Serial.read();
if(ch=='1')
{Serial.println("Forward");
forward();
break;}
else if(ch=='2')
{Serial.println("Left");
right();
break;}
else if(ch=='3')
{Serial.println("Right");
left();
 break;}    
else if(ch=='4')
{Serial.println("Backward");
backward();
i=0;}}

