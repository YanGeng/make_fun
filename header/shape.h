#include <iostream>

class shape
{
	private:
	int line;
	int point;

	public:
	int getLine();
	void setLine(int line);
	int getPoint();
	void setPoint(int point);
	
	shape(int line, int point);
	shape();
};
