// C++ code
//
	int echoPin = 2;
  	int trigPin = 3;
	int redLed = 4;
	int greeLed = 7;
  
	float duration;
	float distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greeLed, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delay(100);
  
  digitalWrite(trigPin, HIGH);
  delay(100);
  
  digitalWrite(trigPin, LOW);
  
  
  duration = pulseIn(echoPin, HIGH);
  
  distance = (duration * 0.034) / 2;
  
  if(distance < 10) {
  	digitalWrite(redLed, HIGH);
    
    digitalWrite(greeLed, LOW);
  }
  else if(distance > 20){
  	digitalWrite(greeLed, HIGH);
    
    digitalWrite(redLed, LOW);
  }
  else{
  digitalWrite(greeLed, LOW);
  digitalWrite(redLed, LOW);
  }
  
  Serial.print("distance: ");
  Serial.print(distance);
  Serial.println("cm");
  
  
}