int gLed = 10; //corresponds to Pin 10 on the Arduino
int yLed = 11; // Pin 11
int rLed = 12; // Pin 12
char myCol[20];

void setup() {
  Serial.begin(9600);
  pinMode(gLed, OUTPUT); //Sets all the LED pins to Output on start up
  pinMode(yLed, OUTPUT);
  pinMode(rLed, OUTPUT);
  
  digitalWrite(gLed, LOW);//turns all LEDs off.
  digitalWrite(yLed, LOW);
  digitalWrite(rLed, LOW);
}

void loop(){
  int lf = 10;
  Serial.readBytesUntil(lf,myCol,1);
  if(strcmp(myCol,"r")==0){
       digitalWrite(rLed, HIGH);       
       digitalWrite(yLed, LOW);   
       digitalWrite(gLed, LOW);
    }
  
     if(strcmp(myCol,"y")==0){
      digitalWrite(rLed,LOW);
      digitalWrite(yLed,HIGH);
      digitalWrite(gLed,LOW);
    }
     if(strcmp(myCol,"g")==0){
      digitalWrite(rLed,LOW);
      digitalWrite(yLed,LOW);
      digitalWrite(gLed,HIGH);
    }
}

