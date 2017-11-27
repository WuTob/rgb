// 
// 
// 

#include "rgbled.h"

rgbLed::rgbLed(uint8_t redPin, uint8_t greenPin, uint8_t bluePin):
//------初始化各种东西--------//
colors{ {255, 255, 255},
		{255, 165, 0},
		{255, 105, 280},
		{0, 51, 153},
		{0, 128, 0},
		{255, 204, 0},
		{139, 0, 255},
		{255, 0, 0},
		{0, 255, 255} },
m_iColorFlag(0),gradualFlag(false)
//------初始化各种东西--------//
{
	m_iRedPin = redPin; m_iGreenPin = greenPin; m_iBluePin = bluePin; //设置针脚
	pinMode(m_iRedPin,	 OUTPUT);
	pinMode(m_iGreenPin, OUTPUT);
	pinMode(m_iBluePin,  OUTPUT);
}

void rgbLed::changeTo(uint8_t red, uint8_t green, uint8_t blue)
{
	analogWrite(m_iRedPin,	 red);
	analogWrite(m_iGreenPin, green);
	analogWrite(m_iBluePin,  blue);
}

void rgbLed::changeTo(rgb color)
{
	changeTo(color.red, 
			 color.green, 
			 color.blue);
}

void rgbLed::gradualChange(bool flag)
{
	gradualFlag = flag;
}

void rgbLed::nextColor()
{
}

void rgbLed::lastColor()
{
}

void rgbLed::gradualChangeTo(uint8_t red, uint8_t green, uint8_t blue)
{
}

void rgbLed::gradualChangeTo(rgb color)
{
}









