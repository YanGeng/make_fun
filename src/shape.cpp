#include "../header/shape.h"

shape::shape():line(1),point(1)
{
}

shape::shape(int line, int point):line(line),point(point)
{
}

void shape::setLine(int line)
{
	this->line = line;
}

int shape::getLine()
{
	return this->line;
}

int shape::getPoint()
{
	return this->point;
}

void shape::setPoint(int point)
{
	this->point = point;
}
