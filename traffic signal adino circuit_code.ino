int greenLED1= 10 ,yellowLED1 = 4 , redLED1 = 7 ;
int greenLED2 = 3 , yellowLED2 = 8, redLED2 = 12;
int greenLED3 = 2, yellowLED3 = 9, redLED3 = 5;
int greenLED4= 13,  yellowLED4= 11, redLED4= 6;
int time_slot;

void setup()
{
  Serial.begin(9600);
	pinMode(redLED1,OUTPUT);
  	pinMode(yellowLED1,OUTPUT);
  	pinMode(greenLED1,OUTPUT);
  	pinMode(redLED2,OUTPUT);
  	pinMode(yellowLED2,OUTPUT);
  	pinMode(greenLED2,OUTPUT); 
  	pinMode(redLED3,OUTPUT);
  	pinMode(yellowLED3,OUTPUT);
  	pinMode(greenLED3,OUTPUT); 
  	pinMode(redLED4,OUTPUT);
  	pinMode(yellowLED4,OUTPUT);
  	pinMode(greenLED4,OUTPUT);
  
  Serial.println("Please enter your time_slot: ");
  while(Serial.available()==0){}
  	time_slot=Serial.parseInt();
}

void loop()
{
  	if(time_slot==1){
    Serial.println("You have chosen time_slot:1-Light traffic(3am-6am)");
    Serial.println(" ");
        digitalWrite(yellowLED1,HIGH);
      	digitalWrite(yellowLED2,HIGH);
      	digitalWrite(yellowLED3,HIGH);
      	digitalWrite(yellowLED4,HIGH);
      	delay(1000);  
      	digitalWrite(redLED1,LOW);
      	digitalWrite(redLED2,LOW);
      	digitalWrite(redLED3,LOW);
      	digitalWrite(redLED4,LOW);
      	digitalWrite(greenLED1,LOW);
      	digitalWrite(greenLED2,LOW);
      	digitalWrite(greenLED3,LOW);
      	digitalWrite(greenLED4,LOW);
    }
  if(time_slot==2){
    Serial.println("You have chosen time_slot:2-Medium Traffic(6am-9am)");
    Serial.println(" ");
    digitalWrite(yellowLED4,LOW);
    digitalWrite(redLED1,LOW);
    digitalWrite(greenLED1,HIGH);
    digitalWrite(redLED2,HIGH);
    digitalWrite(redLED3,HIGH);
    digitalWrite(redLED4,HIGH);
    delay(3000);
    
    digitalWrite(greenLED1,LOW);
    digitalWrite(yellowLED1,HIGH);
    digitalWrite(redLED2,HIGH);
    digitalWrite(redLED3,HIGH);
    digitalWrite(redLED4,HIGH);
    delay(1000);
    
    digitalWrite(redLED1,HIGH);
    digitalWrite(yellowLED1,LOW);
    digitalWrite(greenLED2,HIGH);
    digitalWrite(redLED2,LOW);
    digitalWrite(redLED3,HIGH);
    digitalWrite(redLED4,HIGH);
    delay(3000);
    
    digitalWrite(redLED1,HIGH);
    digitalWrite(greenLED2,LOW);
    digitalWrite(yellowLED2,HIGH);
    digitalWrite(redLED3,HIGH);
    digitalWrite(redLED4,HIGH);
    delay(1000);
    
    digitalWrite(redLED1,HIGH);
    digitalWrite(redLED2,HIGH);
    digitalWrite(yellowLED2,LOW);
    digitalWrite(greenLED3,HIGH);
    digitalWrite(redLED3,LOW);
    digitalWrite(redLED4,HIGH);
    delay(3000);
    
    digitalWrite(redLED1,HIGH);
    digitalWrite(redLED2,HIGH);
    digitalWrite(greenLED3,LOW);
    digitalWrite(yellowLED3,HIGH);
    digitalWrite(redLED4,HIGH);
    delay(1000);
    
    digitalWrite(redLED1,HIGH);
    digitalWrite(redLED2,HIGH);
    digitalWrite(redLED3,HIGH);
    digitalWrite(yellowLED3,LOW);
    digitalWrite(redLED4,LOW);
    digitalWrite(greenLED4,HIGH);
    delay(3000);
    
    digitalWrite(redLED1,HIGH);
    digitalWrite(redLED2,HIGH);
    digitalWrite(redLED3,HIGH);
    digitalWrite(greenLED4,LOW);
    digitalWrite(yellowLED4,HIGH);
	delay(1000);
    
  }
  
  if(time_slot==3){
    Serial.println("You have chosen time_slot:3-High Traffic(9am-9pm)");
    Serial.println(" ");
    	digitalWrite(redLED2,LOW);
   		digitalWrite(redLED4,LOW);
    	digitalWrite(yellowLED3,LOW);
    	digitalWrite(yellowLED4,LOW);
    	digitalWrite(greenLED2,HIGH);
    	digitalWrite(greenLED4,HIGH);
    	digitalWrite(redLED3,HIGH);
   		digitalWrite(redLED1,HIGH);
    	delay(3000);
    
    	digitalWrite(greenLED2,LOW);
    	digitalWrite(greenLED4,LOW);
    	digitalWrite(yellowLED2,HIGH);
    	digitalWrite(yellowLED4,HIGH);
    	digitalWrite(redLED3,HIGH);
   		digitalWrite(redLED1,HIGH);
    	delay(1000);
    
    	digitalWrite(greenLED1,HIGH);
    	digitalWrite(greenLED3,HIGH);
    	digitalWrite(yellowLED2,LOW);
    	digitalWrite(yellowLED4,LOW);
    	digitalWrite(redLED3,LOW);
   		digitalWrite(redLED1,LOW);
    	digitalWrite(redLED2,HIGH);
   		digitalWrite(redLED4,HIGH);
    	delay(3000);
    	
    	digitalWrite(greenLED1,LOW);
    	digitalWrite(greenLED3,LOW);
    	digitalWrite(yellowLED3,HIGH);
    	digitalWrite(yellowLED4,HIGH);
    	digitalWrite(redLED2,HIGH);
   		digitalWrite(redLED4,HIGH);
    	delay(1000);
    	
  }
  
  if(time_slot==4){
    Serial.println("You have chosen time_slot:4-Light Traffic(9pm-3am)");
    Serial.println(" ");
        digitalWrite(yellowLED1,HIGH);
      	digitalWrite(yellowLED2,HIGH);
      	digitalWrite(yellowLED3,HIGH);
      	digitalWrite(yellowLED4,HIGH);
      	delay(1000);  
      	digitalWrite(redLED1,LOW);
      	digitalWrite(redLED2,LOW);
      	digitalWrite(redLED3,LOW);
      	digitalWrite(redLED4,LOW);
      	digitalWrite(greenLED1,LOW);
      	digitalWrite(greenLED2,LOW);
      	digitalWrite(greenLED3,LOW);
      	digitalWrite(greenLED4,LOW);
  }
  
}
