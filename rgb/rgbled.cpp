// 
// 
// 

#include "rgbled.h"

rgbLed::rgbLed(uint8_t redPin, uint8_t greenPin, uint8_t bluePin): 
colors{ {255, 255, 255},
		{255, 165, 0},
		{255, 105, 280},
		{0, 51, 153},
		{0, 128, 0},
		{255, 204, 0},
		{139, 0, 255},
		{255, 0, 0},
		{0, 255, 255} }
{
	m_iRedPin = redPin; m_iGreenPin = greenPin; m_iBluePin = bluePin; //…Ë÷√’ÎΩ≈
	pinMode(m_iRedPin, OUTPUT);
	pinMode(m_iGreenPin, OUTPUT);
	pinMode(m_iBluePin, OUTPUT);
}

void rgbLed::changeTo(uint8_t red, uint8_t green, uint8_t blue)
{
	analogWrite(m_iRedPin, red);
	analogWrite(m_iGreenPin, green);
	analogWrite(m_iBluePin, blue);
}

void rgbLed::nextColor()
{
	m_iCurrentColor = ++m_iCurrentColor % colorNum;

	changeTo(colors[m_iCurrentColor].red, colors[m_iCurrentColor].green, colors[m_iCurrentColor].blue);
}




