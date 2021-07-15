const int greenLPin = 9;
const int redLPin = 10;
const int blueLPin = 11;

const int lightSensorPin = A0;

int lightSensorV = 0;

void setup() {
  Serial.begin(9600);

  pinMode(greenLPin, OUTPUT);
  pinMode(redLPin, OUTPUT);
  pinMode(blueLPin, OUTPUT);

}

long lastTime = 0;
long now;

void loop() {
  lightSensorV = analogRead(lightSensorPin);
  Serial.println(lightSensorV);

  if (lightSensorV < 700) {
    //Beginning of Timer code
    now = millis();
    int deltaT = now - lastTime;


    Serial.println(deltaT);

    if (deltaT > 230) { //Too slow: LED RED
      analogWrite(greenLPin, 0);
      analogWrite(redLPin, 255);
      analogWrite(blueLPin, 0);
    }
    if (deltaT < 230) {  //Too fast: LED BLUE
      analogWrite(greenLPin, 0);
      analogWrite(redLPin, 0);
      analogWrite(blueLPin, 255);
    }
   //set last detection time equal to now
  lastTime = now;

  //Delay the next detection by 150 milliseconds so tape move out of way
  delay(150);
  }

}
