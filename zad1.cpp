#include <iostream>
#include <cassert>

struct Time {
	short hour;
	short min;
	short sec;

	void normilizeTime()
	{
		while (sec >= 60)
		{
			sec -= 60;
			min++;
		}

		while (min >= 60)
		{
			min -= 60;
			hour++;
		}

		while (sec < 0)
		{
			sec += 60;
			min--;
		}

		while (min < 0)
		{
			min += 60;
			hour--;
		}
	}

	void printTime()
	{
		normilizeTime();
		std::cout << hour << ":" << min << ":" << sec << std::endl;
	}
};

struct Event {
	char tite[128];
	char organizer[128];
	Time startTime;
	Time endTime;

	void assertTime() const
	{
		bool correctTime = false;

		if (startTime.hour < endTime.hour)
		{
			correctTime = true;
		}

		else if (startTime.hour == endTime.hour)
		{
			if (startTime.min < endTime.min)
			{
				correctTime = true;
			}

			else if (startTime.min == endTime.min)
			{
				if (startTime.sec <= endTime.sec)
				{
					correctTime = true;
				}
			}
		}

		else
		{
			correctTime = false;
		}

		assert(correctTime);
	}

	Time getDuration() const
	{
		assertTime();

		Time duration;

		duration.hour = endTime.hour - startTime.hour;
		duration.min = endTime.min - startTime.min;
		duration.sec = endTime.sec - startTime.sec;

		duration.normilizeTime();

		return duration;
	}
};

int main()
{
	Time startTime{ 12, 50, 0 };
	Time endTime{ 14, 0 , 0 };

	Event event{ "Event 1", "Borkata", startTime, endTime };

	Time duration = event.getDuration();

	duration.printTime();

	return 0;
}