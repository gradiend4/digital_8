#pragma once
#include <Arduino.h>

const byte Digs[] = { B11111100, B01100000, B11011010, B11110010, B01100110, B10110110, B10111110, B11100000, B11111110, B11110110, B11111101, B01100001, B11011011, B11110011, B01100111, B10110111, B10111111, B11100001, B11111111, B11110111 };  // от 0 до 9
const byte pin_Disp= 2;

class Display_8 {
	public:
	void record(uint8_t digital);
	void record_byte(uint8_t _byte);
	void print(uint8_t addr);
	void init();
	private:
};

