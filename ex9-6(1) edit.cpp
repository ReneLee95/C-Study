#include <iostream>
#include <cstdlib>
using namespace std;

class Calculator
{
	public:
		virtual int add(int a,int b) = 0;
		virtual int subtract(int a, int b) = 0;
		virtual double average(int a[],int size)=0;
};

class Good : public Calculator
{
	public:
		int i;
		int add(int a, int b)
		{
			return a+b;
		}
		int subtract(int a,int b)
		{
			return a-b;
		}
		
		double average(int a[],int size)
		{
			double sum = 0;
			do
			{
				sum+=a[i];
				i++;
			}
			while (i<size);
			return sum/size;
		}
};

int main()
{
	int a[]={1,2,3,4,5};

	Calculator *p = new Good();
	
	cout << p->add(2,3) <<endl;
	cout << p->subtract(2,3) << endl;
	cout << p->average(a,5) <<endl;
	delete p;
}
