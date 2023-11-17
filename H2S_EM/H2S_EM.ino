// the setup routine runs once when you press reset:
float H2S_ppm;


void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue1 = analogRead(A0); //H2Sl

  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage1 = sensorValue1 * (5.0 / 1023.0);

  // print out the value you read:
  H2S_ppm=voltage1*40; // ppm on y-axis and voltage on x-axis, y= mx+c; at voltage=0, ppm=0; y=mx; at voltage=5, ppm =300; y=60x
  
  Serial.print(voltage1);
  Serial.print(",");
  Serial.println(H2S_ppm);
  
  
  delay(1000);
}
