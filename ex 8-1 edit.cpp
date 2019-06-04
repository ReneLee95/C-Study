#include <iostream>
#include <string>

using namespace std;

class Point {
	int x,y,z;
	
	public :
		void set(int x, int y,int z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}
		
		void showPoint()
		{
			cout <<"("<< x << "," << y << "," << z << ")" << endl;
		}
};

class colorPoint : public Point 
{
	string color;
	
	public :
		void setColor(string color)
		{
			this->color = color;
		}
		void showColorPoint();
};

void colorPoint::showColorPoint()
{
	cout << color <<":";
	showPoint();
}

int main()
{
	Point p;
	colorPoint cp;
	cp.set(3,4,5);
	cp.setColor("Red");
	cp.showColorPoint();
}
