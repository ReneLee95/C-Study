#include <iostream>
using namespace std;

class base
{
	public:
	int a;
	protected:
		void setA(int a)
		{
			this->a = a;
		}
	public:
			void showA()
			{
				cout<<a<<endl;
			}
};

class derived : private base
{
	int b;
	protected:
		void setB(int b)
		{
			this->b = b;
			cout << b+b<<endl;
		}
	public:
		void showB()
		{
			setA(5);
			showA();
			cout << b<<endl;
		}
};

class Grandderived : private derived
{
	int c;
	public:
		void setAB(int x)
		{
			//setA(x);
			//showA();
			setB(x);
		}
};

int main()
{
	Grandderived g;
	g.setAB(5);
	base b;
	b.showA();
	derived d;
	d.showB();
}

