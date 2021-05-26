// C++ code
//
void setup()
{
  Serial.begin(9600); // set up transmission speed
  pinMode(LED_BUILTIN, OUTPUT);  
}

void loop()
{
 
  int sensorValue = analogRead(A0);
  Serial.print(sensorValue);
  Serial.print("\n");
 // int delayTime = (sensorValue / 1023.00) * 1000;
  //Serial.print(delayTime);  // show variable delayTime
 // Serial.print("\n");
  //smallPeriod(3,delayTime / 2);
  //smallPeriod(3,delayTime);
  //smallPeriod(3,delayTime / 2);
  //delay(2000);


  
  //singlePeriod(500);  // short
  //singlePeriod(500);  // short
  //singlePeriod(500);  // short

  //singlePeriod(1000); // long
  //singlePeriod(1000); // long
 // singlePeriod(1000); // long

  //singlePeriod(500);  // short
  //singlePeriod(500);  // short
 // singlePeriod(500);  // short

  delay(1000);

}

// blink on and off
void singlePeriod(int length){
  
    digitalWrite(LED_BUILTIN, HIGH);
  	delay(length / 2);
    digitalWrite(LED_BUILTIN, LOW);
  	delay(length / 2);
 
  
}