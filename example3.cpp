#include <iostream>
#include <cstdlib>
using namespace std;

class Pizza{
	private :
		int a;
		
	public :
		Pizza();
		Pizza(int k);
		~Pizza();
		double getArea(){ return 3.14*a*a; }
		int getPizza() { return a; }
		void setPi(int a) { this->a = a;}
};

Pizza::Pizza()
{
	int a=1;
	cout << "execute a = " <<a<<endl;
}

Pizza::Pizza(int a)
{
	this->a = a;
	cout << "execute a2 = "<<a<<endl;
}

Pizza::~Pizza()
{
	cout<<"delete a = "<<a<<endl;
}

void increase(Pizza p)
{
	int k = p.getPizza();
	p.setPi(k+1);
}

int main()
{
	Pizza pi(30);
	increase(pi);
	cout<<pi.getPizza()<<endl;
}
