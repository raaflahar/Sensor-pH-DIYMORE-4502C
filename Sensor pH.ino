void setup() {
  Serial.begin(9600); //Memulai Serial Monitor
}

void loop() {
  float pengukuran = analogRead(A0);  //Membaca nilai analog pin A0
  double tegangan = pengukuran*5/1024; //Konversi nilai analog menjadi tegangan
 
  // PH_step (Tegangan/pH Unit) = (Tegangan@PH7-Tegangan@PH4)/(PH7 - PH4)
  float pH = 7+((2.5 - tegangan)/0.18); // PH_probe = PH7-((Tegangan@PH7-Tegangan@probe)/PH_step)
  Serial.print("PH: "); //Print pH di Serial Monitor
  Serial.println(pH); //Print data pH di Serial Monitor

  delay(500);  //Memberikan delay 1s
}  