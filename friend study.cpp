#include <iostream>
using namespace std;

class Circle;
void area(Circle r);
class addCircle{
	public:
		int addradius(Circle r);
};

class Circle
{
	private:
		int radius;
	public:
		Circle(int radius)
		{
			this->radius = radius;
		}
		friend int addCircle::addradius(Circle r);
		friend void area(Circle r);
};

void area(Circle r)
{
	cout << "���̴� : " << 3.14*r.radius << endl; 
}

int addCircle::addradius(Circle r)
{
	r.radius +=3;
	cout << "�ٲ� radius �� : " << r.radius << endl;
	return r.radius; 
}

int main()
{
	Circle round(5);
	area(round);
	addCircle addround;
	addround.addradius(round);
}
