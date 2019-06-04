#include <cstdlib>
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle()
{ 
	radius = 1; 
}
	Circle(int r)
{ 
	radius = r; 
}  
	double getArea();
}; 

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main(int argc, char *argv[])
{
    Circle donut;						//�⺻������ ȣ�� 
	Circle pizza(30);					//�Ű������� int �� 30 ���� 
	cout << donut.getArea()	<< endl;
	Circle *p;							//������ ���� p ���� 
	p = &donut;							//������ ���� p�� donut ��ü �ּ� ���� 
	cout << p->getArea() << endl;		//donut ���� ��� 
	cout << (*p).getArea() << endl;
	p = &pizza;							//������ ������ �Ű����� 1�� ������ �����ڷ� ������� pizza ��ü�� �ּҸ� ����
	cout << p->getArea() << endl;		//p�� ����Ű�� �ִ� pizza ��ü�� ���� ��� 
	cout << (*p).getArea() << endl;
    
    return EXIT_SUCCESS;
}
