#ifndef TIME_H_
#define TIME_H_
class Time
{
private:
	short hour;
	short min;
	short sec;

public:
	void setHour(short hour);
	void setMin(short min);
	void setSec(short sec);

	short getHour() const;
	short getMin() const;
	short getSec() const;

	Time();
	Time(short hour, short min, short sec);

	void normalizeTime();
	void printTime();
};
#endif
