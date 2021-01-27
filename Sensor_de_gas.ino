int buzzer = 6;
int verde = 8;
int roja = 10;
int valor = 0;

void setup() 
{
 Serial.begin(9600);
 pinMode(buzzer,OUTPUT);
 pinMode(verde,OUTPUT);
 pinMode(roja,OUTPUT);
 
}

void loop() {
  
 valor = analogRead(A0);



if(valor<100){
  
 Serial.print("a");delay(150);
  digitalWrite(verde,HIGH);
  digitalWrite(roja,LOW);
  digitalWrite(buzzer,LOW);
}
else{
   Serial.print("b");delay(150);
  digitalWrite(verde,LOW);
  digitalWrite(roja,HIGH);
  analogWrite(buzzer,250);
  delay(200);
  analogWrite(buzzer,0);
  delay(200);
}



}
