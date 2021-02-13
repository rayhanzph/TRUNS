void setup() {
  Serial.begin(9600);
}

void loop() {

  int inputPin = analogRead(A0);
  float volt = inputPin * (5.0 / 1023.0);
  Serial.print("Analog = ");
  Serial.println(inputPin);
  Serial.print("Voltage = ");
  Serial.print(volt);
  Serial.println(" Volt");
  delay(1000);

  // Casting 12 bit
  int inputPin2 = analogRead(A1);
  float volt2 = inputPin2 * (5.0 / 4095.0); // 4095 karena 12 bit
  Serial.print("Analog = ");
  Serial.println(inputPin2);
  Serial.print("Voltage = ");
  Serial.print(volt2);
  Serial.println(" Volt");
  delay(1000);
  

  // Membaca dengan analogReadResolution pada board Arduino SAM
  // Membaca input A0 pada resolusi default (10 bits)
  analogReadResolution(10);
  Serial.print("ADC 10-bit (default) : ");
  Serial.print(analogRead(A0));

  // mengganti resolusi 12 bits dari pin A0
  analogReadResolution(12);
  Serial.print(", 12-bit : ");
  Serial.print(analogRead(A0));

  // mengganti resolusi 16 bits dari pin A0
  analogReadResolution(16);
  Serial.print(", 16-bit : ");
  Serial.print(analogRead(A0));

  // mengganti resolusi 8 bits dari pin A0
  analogReadResolution(8);
  Serial.print(", 8-bit : ");
  Serial.println(analogRead(A0));

  delay(100);
}