#ifndef EVENT_H_
#define EVENT_H_
#include "Time.h"

class Event
{
private:
	char title[128];
	char organizer[128];
	Time startTime;
	Time endTime;

public:
	void setTitle(char title[128]);
	void setOrganizer(char organizer[128]);
	void setStartTime(const Time& start);
	void setEndTIme(const Time& end);

	const char* getTitle() const;
	const char* getOrganizer() const;
	const Time getStartTime() const;
	const Time getEndTime() const;

	Event();
	Event(char title[128], char organizer[128], Time start, Time end);

	Time getDuration();
};
#endif
