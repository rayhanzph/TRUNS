void setup(){

}

void loop() {
  int a = 2;
  int b = 3;
  int c;

  c = fungsiPerkalian(a, b); // c = 6
  Serial.println(c);
  delay(500);
}

int fungsiPerkalian(int x, int y){
  int hasil;
  hasil = x * y;
  return hasil;
}