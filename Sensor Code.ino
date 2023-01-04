void setup() {
  Serial.begin(9600); //Begin Serial Monitor
}

void loop() {
  float measure = analogRead(A0);  //Read pin A0
  double voltage = measure*5/1024; //Analog-to-Digital Conversion
 
  // PH_step (Voltage/pH Unit) = (Voltage@PH7-Voltage@PH4)/(PH7 - PH4)
  float pH = 7+((2.5 - tegangan)/0.1841); // PH_probe = PH7-((Voltage@PH7-Voltage@probe)/PH_step)
  Serial.print("PH: "); //Print word pH in Serial Monitor
  Serial.println(pH); //Print pH value in Serial Monitor

  delay(1000);  //Gives delay 1 second
}