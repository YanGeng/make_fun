#include <iostream>

using namespace std;

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

int main()
{
//	shape *s = new shape();
	cout << "Hello world\n";
}

