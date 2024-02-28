#include "Time.h"
#include<iostream>

void Time::setHour(short hour)
{
	if (hour >= 0)
	{
		this->hour = hour;
	}
}

void Time::setMin(short min)
{
	if (min >= 0)
	{
		this->min = min;
	}
}

void Time::setSec(short sec)
{
	if (sec >= 0)
	{
		this->sec = sec;
	}
}

short Time::getHour() const
{
	return this->hour;
}

short Time::getMin() const
{
	return this->min;
}

short Time::getSec() const
{
	return this->sec;
}

Time::Time()
{
}

Time::Time(short hour, short min, short sec)
{
	this->setHour(hour);
	this->setMin(min);
	this->setSec(min);
}

void Time::normalizeTime()
{
	while (this->sec >= 60)
	{
		this->sec -= 60;
		this->min++;
	}

	while (this->min >= 60)
	{
		this->min -= 60;
		this->hour++;
	}

	while (this->sec < 0)
	{
		this->sec += 60;
		this->min--;
	}

	while (this->min < 0)
	{
		this->min += 60;
		this->hour--;
	}
}

void Time::printTime()
{
	normalizeTime();
	std::cout << this->hour << ":" << this->min << ":" << this->sec << std::endl;
}

