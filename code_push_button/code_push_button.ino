//setting the pin numbers
const int ledPin = 8;         //Defining the digital pins of the components
const int buttonPin = 3;
const int buzzer = 9;
int buttonState = 0;          //Definig variable for reading the status of pushbutton

void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);    //Sets the LED pin as an output
  pinMode(buttonPin, INPUT);  //Sets the pushbutton pin as an output
  
  pinMode(buzzer, OUTPUT); // Sets the buzzer pin as an output
}

void loop() {

  buttonState = digitalRead(buttonPin); //Reads the status of the pushbutton

  if (buttonState == HIGH) {            //Checks if the pushbutton is pressed
    //If it is pressed, the buttonState is set as HIGH
    digitalWrite(ledPin, HIGH);         //turns LED on    
    tone(buzzer, 500); // Triggers the buzzer to 200Hz frequency
    Serial.println("LED is on "); // Displays the result on the serial monitor
  }
  else {

    digitalWrite(ledPin, LOW); // turns LED off
    noTone(buzzer); // Swithches off the buzzer
    Serial.println("LED is off "); // Displays the result 
  }

}
