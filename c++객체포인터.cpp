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
    Circle donut;						//기본생성자 호출 
	Circle pizza(30);					//매개변수에 int 값 30 대입 
	cout << donut.getArea()	<< endl;
	Circle *p;							//포인터 변수 p 선언 
	p = &donut;							//포인터 변수 p의 donut 객체 주소 지정 
	cout << p->getArea() << endl;		//donut 면적 출력 
	cout << (*p).getArea() << endl;
	p = &pizza;							//포인터 변수에 매개변수 1개 포함한 생성자로 만들어진 pizza 객체의 주소를 지정
	cout << p->getArea() << endl;		//p가 가리키고 있는 pizza 객체의 면적 출력 
	cout << (*p).getArea() << endl;
    
    return EXIT_SUCCESS;
}
