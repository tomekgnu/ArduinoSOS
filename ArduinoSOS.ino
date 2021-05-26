// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);  
}

void loop()
{
 
  int sensorValue = analogRead(A0);
  int delayTime = (sensorValue / 1023.00) * 1000;
  blink(3,delayTime / 2);
  blink(3,delayTime);
  blink(3,delayTime / 2);
  delay(2000);
}

void blink(int times,int width){
  
  int n;
  for(n = 0; n < times; n++){
    digitalWrite(LED_BUILTIN, HIGH);
  	delay(width / 2);
    digitalWrite(LED_BUILTIN, LOW);
  	delay(width / 2);
  }  
  
}