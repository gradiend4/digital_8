#pragma once
#include <Arduino.h>

const byte Digs[] = { B11111100, B01100000, B11011010, B11110010, B01100110, B10110110, B10111110, B11100000, B11111110, B11110110, B00000000 };  // от 0 до 9,10 пусто
const byte pin_Disp= 2;

class Display_8 {
	public:
	void record(uint8_t digital);
	void print(uint8_t addr);
	void init();
	private:
	
};

