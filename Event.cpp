#include "Event.h"
#include<iostream>

void Event::setTitle(char title[128])
{
	if (strlen(title) > 0)
	{
		strcpy(this->title, title);
	}
}

void Event::setOrganizer(char organizer[128])
{
	if (strlen(organizer) > 0)
	{
		strcpy(this->organizer, organizer);
	}
}

void Event::setStartTime(const Time& start)
{
	this->startTime = start;
}

void Event::setEndTIme(const Time& end)
{
	this->endTime = end;
}

const char* Event::getTitle() const
{
	return this->title;
}

const char* Event::getOrganizer() const
{
	return this->organizer;
}

const Time Event::getStartTime() const
{
	return this->startTime();
}

const Time Event::getEndTime() const
{
	return this->endTime();
}

Event::Event()
{
}

Event::Event(char title[128], char organizer[128], Time start, Time end)
{
	this->setTitle(title);
	this->setOrganizer(organizer);
	this->setStartTime(start);
	this->setEndTIme(end);
}

Time Event::getDuration()
{
	Time duration;

}
