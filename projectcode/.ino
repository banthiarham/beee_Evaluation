int LEDState=0;
int LED1=7;
int LED2=6;
int LED3=5;
int LED4=4;
int LED5=3;
int LED6=2;
int threshold=600;
int ldrReading;
int LDRSensor= A0;

int buttonPin= 8;
int buttonOld=1;
int dt=100;
int buttonNew;
int val=0;
int old_val=0;
int state=0;
void setup() {
Serial.begin(9600);
pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  ldrReading= analogRead(LDRSensor);
 val=digitalRead(buttonPin);
 buttonNew=digitalRead(buttonPin);
if (ldrReading < threshold)
{
if( (val==HIGH) && (old_val==LOW)) {
  state=1-state;}
  old_val=val;
  
  if (state==1){
    
    
    digitalWrite(LED1, HIGH);
     digitalWrite(LED2, HIGH);
     digitalWrite(LED3, HIGH);
     digitalWrite(LED4, HIGH);
     digitalWrite(LED5, HIGH);
     digitalWrite(LED6, HIGH);
    delay(500);
     digitalWrite(LED1, LOW);
     digitalWrite(LED2, LOW);
     digitalWrite(LED3, LOW);
     digitalWrite(LED4, LOW);
     digitalWrite(LED5, LOW);
     digitalWrite(LED6, LOW);
    
  
    delay(500);
    }
  

else{
      digitalWrite(LED1, HIGH);
     digitalWrite(LED2, HIGH);
     digitalWrite(LED3, HIGH);
     digitalWrite(LED4, HIGH);
     digitalWrite(LED5, HIGH);
     digitalWrite(LED6, HIGH);
  delay(1000);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  delay(1000);
}
  

}
  else{
      digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  delay(1000);
  }
    
    
  }




