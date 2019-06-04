#include <iostream> 

using namespace std;

class Circle { 
	private: 
	static int numOfCircles; 
	int radius; 
	public: 
	Circle(int r=1); 
	~Circle() { numOfCircles--; }
	double getArea()  { return 3.14*radius*radius;}
	static int getNumOfCircles() { return numOfCircles; } 
};
 
Circle::Circle(int r) {
radius = r;
numOfCircles++
}

int Circle::numOfCircles = 0; 

int main() {
	
Circle *p = new Circle[10];
cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;
delete [] p; // 10���� �Ҹ��� ����
cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;
Circle a; // ������ ����
cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;
Circle b; // ������ ����
cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;
}
