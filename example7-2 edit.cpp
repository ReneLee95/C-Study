#include <iostream>
#include <cstdlib>

using namespace std;

class Circle;

class CircleEdit{
	public:
		bool equals(Circle c,Circle s);
};

class Circle
{
	int radius;
	public:
		Circle(int radius)
		{
			this->radius = radius;
		}
		friend bool CircleEdit::equals(Circle c,Circle s);
};

bool CircleEdit::equals(Circle c,Circle s)
{
	if(c.radius == s.radius)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int i=1,j=1;
	while(i>0&&j>0)
	{
		cout << "두개의 원 반지름 입력하시오 (같음 판별 , 종료시 -1값 2번입력) : "<<endl;
		cin >> i>>j;
		Circle a(i), b(j);
		CircleEdit Edit;
		if(i>0&&j>0)
		{
			if(Edit.equals(a,b)) 
			{
				cout<<"equal"<<endl;
			}		
			else
			{
				cout<<"not equal"<<endl;
			}
		}
		else if(i<0)
		{
			cout<<"exit"<<endl;
		}
	}
}
