//Relay and Microphone Sensor
#define signalToRelayPin 13          
#define sensorPin 2
//Microphone sensor
int sensor = 4;
//Different Values for time calculation
int lastSoundValue;
int soundValue;
long lastNoiseTime = 0;
long currentNoiseTime = 0;
long lastLightChange = 0;
int relayStatus = HIGH;

void setup() {
  //Sesnor and Relay Input output
  pinMode(sensorPin, INPUT);
  pinMode(signalToRelayPin, OUTPUT);
  pinMode(sensor, OUTPUT);
  digitalWrite(sensor, HIGH);        //Always HIGH
}

void loop() {
  //Reading value of microphone sensor
  soundValue = digitalRead(sensorPin);
  currentNoiseTime = millis();                   //To calculate time difference
  //If a loud enough sound is detected it soundValue == 1
  if (soundValue == 1) { // if there is currently a noise

    if (
      (currentNoiseTime > lastNoiseTime + 200) && // to debounce a sound occurring in more than a loop cycle as a single       //Time Difference between two claps
      (lastSoundValue == 0) &&  // if it was silent before
      (currentNoiseTime < lastNoiseTime + 800) && // if current clap is less than 0.8 seconds after the first clap
      (currentNoiseTime > lastLightChange + 1000) // to avoid taking a third clap as part of a pattern
    ) {
      //Relay controls
      relayStatus = !relayStatus;
      digitalWrite(signalToRelayPin, relayStatus);
      lastLightChange = currentNoiseTime;
     }

     lastNoiseTime = currentNoiseTime;
  }

  lastSoundValue = soundValue;
}
