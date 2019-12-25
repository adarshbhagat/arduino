void setup() {
 pinMode(13,OUTPUT);
 pinMode(8,INPUT);
 pinMode(10,INPUT);
 pinMode(9,INPUT);
 pinMode(4,OUTPUT);
 //Serial.begin(9600);
}
//all operations,comparions are done in millisecond

// you can uncomment Serial related functions to check status of code on serial monitor
unsigned long calculated_time=0;
int t1=0,t2=0,t3=0;

//connect a led on pin no 13
//connect three switch to pin no 10,9,8 assume it as s1,s2 and s3 respectively
void loop() {
 
 
 //no of led blink on pin no.13 will be added in t1
 //led will start blinking after pressing s1
 while(digitalRead(10)==HIGH)//no of led blink on pin no.13 will be added in t1
 {
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(400);
  t1++;
 }
 
 
 
 //no of led blink on pin no.13 will be added in t2
 //led will start blinking after pressing s2
 while(digitalRead(9)==HIGH)//no of led blink on pin no.13 will be added in t2
 {                          
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(400);
  t2++;
 }
 
 
 
 //no of led blink on pin no.13 will be added in t2
 //led will start blinking after pressing s3
 while(digitalRead(8)==HIGH)//no of led blink on pin no.13 will be added in t3
 {
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(400);
  t3++;
 }
 
 
 
 //calculating time
 calculated_time=60000*(t3*100+t2*10+t1*1);
 //Serial.print("calculated time:- ");
 //Serial.println(calculated_time);
 
 
 
 //it will make digital pin 4 high when calculated time is less than the time returned by millis function
 if(millis()<calculated_time)
 {
  digitalWrite(4,HIGH);
 }
 else
 {
  digitalWrite(4,LOW);
 }
}
