#include <display_8.h>

void Display_8::record(uint8_t digital) {             // (цифра)
  for (int i = 0; i < 2; i++) digitalWrite(i + pin_Disp, 1);  // гасим катоды, высокий уровень
  for (int i = 0; i < 8; i++) {
    digitalWrite(pin_Disp+4, 0); //clock pin CP 
    digitalWrite(pin_Disp+3, (Digs[digital]) & 1 << i); // data pin A
    digitalWrite(pin_Disp+4, 1); //
  }
}
void Display_8::init(){
	for (int i = pin_Disp; i <= pin_Disp+4 ; i++) pinMode(i, OUTPUT);
}
void Display_8::print(uint8_t addr){
	for (int y = 0; y < 4; y++) digitalWrite(pin_Disp+3-y, addr & 1 <<y); // addr(0-7) знакоместо
}	