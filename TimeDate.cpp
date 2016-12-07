#include "TimeDate.h"


TimeDate::TimeDate()
{
}


TimeDate::~TimeDate()
{
}

TimeDate::TimeDate(std::string timedate)
{
	HH:MM // DD/MM/YYYY 
	istringstream iss(timedate);
	char dump;
	iss >> hour >> dump >> minute >> dump >> day >> month >> dump >> year;
}

std::string TimeDate::getFormatted() const
{
	HH:MM // DD/MM/YYYY 
	ostringstream oss;
	oss << std::setfill('0');
	oss << std::setw(2) << hour << ':';
	oss << std::setw(2) << minute;
	oss << std::setw(2) << day << '/';
	oss << std::setw(2) << month << '/';
	oss << year << ' ';
	return oss.str();
}