const int buttonPin = 2;    //button == pin2
const int motorPin = 9;       //button == pin9

int buttonState = 0;        //reads the state of the button

void setup(){
 pinMode(buttonPin, INPUT); 
 pinMode(motorPin, OUTPUT); 
}

void loop(){
  buttonState = digitalRead(buttonPin);
  
  //When button is pushed, voltage is LOW
  if(buttonState == LOW){
   digitalWrite(motorPin, HIGH); 
  }
  else{
   digitalWrite(motorPin, LOW); 
  }
}


