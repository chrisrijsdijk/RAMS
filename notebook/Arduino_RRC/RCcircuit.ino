const int sensorPinA0 = A0;                  //positive pole of R1
const int sensorPinA1 = A1;                  //positive pole of R2
const int sensorPinA2 = A2;                  //positive pole of C1
const int outputPin2 = 2;                    //use pin 2 from Arduino 
int incomingByte = 0;                        //keyboard input

void setup() {
  Serial.begin(9600);
  pinMode(outputPin2, OUTPUT);
  digitalWrite(outputPin2, LOW);
  
}

void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();

    switch (incomingByte) {
      case '1':
        digitalWrite(outputPin2, HIGH);                //switch on the circuit
        Serial.print("1");                             //print switch value
        Serial.print(" ");                             //print space as a separator
        break;

      case '0':
        digitalWrite(outputPin2, LOW);                 //switch off
        Serial.print("0");
        Serial.print(" ");
        break;
        
    }
   int sensorValA0 = analogRead(sensorPinA0);
   int sensorValA1 = analogRead(sensorPinA1);
   int sensorValA2 = analogRead(sensorPinA2);
   Serial.print(sensorValA0);
   Serial.print(" ");
   Serial.print(sensorValA1);
   Serial.print(" ");
   Serial.print(sensorValA2);
   delay(1);
  }  
}
