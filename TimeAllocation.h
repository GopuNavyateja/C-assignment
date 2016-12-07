
#include "Timedate.h"

class TimeDate
{
public:
	TimeAllocation(string, string);
	~TimeAllocation();
	virtual string details() = 0;

	string getStart();
	string getEnd();
private:
	TimeDate start;
	TimeDate end;

};

