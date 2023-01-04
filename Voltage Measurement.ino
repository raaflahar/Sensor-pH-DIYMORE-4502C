void setup() {
  Serial.begin(9600); //Begin the Serial Monitor
}

void loop() {
  float measure = analogRead(A0);  //Read pin A0
  double voltage = measure*5/1024; //Analog-to-Digital Conversion
  Serial.println(voltage); //Print voltage value to Serial Monitor
}