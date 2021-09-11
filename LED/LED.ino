//percobaan pertama
//type data yang berfungsi sebagai penyimpanan bilangan
int ledPin = 13;
void setup() {
  //menjadikan ledPin menjadi OUTPUT
  pinMode(ledPin,OUTPUT);
}

void loop() {
//menyalakan ledPin selama 1 dtik
digitalWrite(ledPin,HIGH);
delay(1000);
//pause atau mematikan ledPin selama 1 detik
digitalWrite(ledPin,LOW);
delay(1000);
}
