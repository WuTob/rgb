// rgbled.h

#ifndef _RGBLED_h
#define _RGBLED_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

struct rgb
{
	uint8_t red;
	uint8_t green;
	uint8_t blue;
};

class rgbLed
{
public:
	rgbLed(uint8_t redPin, uint8_t greenPin, uint8_t bluePin);
	void changeTo(uint8_t red, uint8_t green, uint8_t blue);
	void nextColor();
	void lastColor();

private:
	static const int colorNum = 9;
	const rgb colors [colorNum];

	uint8_t m_iRedPin, m_iGreenPin, m_iBluePin;

	int m_iCurrentColor;

};

#endif

