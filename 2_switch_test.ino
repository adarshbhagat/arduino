void setup() {
 pinMode(13,OUTPUT);
 pinMode(8,INPUT);
 pinMode(10,INPUT);
 pinMode(9,INPUT);
 pinMode(4,OUTPUT);
 //Serial.begin(9600);
}
unsigned long calculated_time=0;
int t1=0,t2=0,t3=0;
void loop() {
 while(digitalRead(10)==HIGH)
 {
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(400);
  t1++;
 }
 while(digitalRead(9)==HIGH)
 {
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(400);
  t2++;
 }
 while(digitalRead(8)==HIGH)
 {
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(400);
  t3++;
 }
 calculated_time=60000*(t3*100+t2*10+t1*1);
 //Serial.print("calculated time:- ");
 //Serial.println(calculated_time);
 if(millis()<calculated_time)
 {
  digitalWrite(4,HIGH);
 }
 else
 {
  digitalWrite(4,LOW);
 }
}
