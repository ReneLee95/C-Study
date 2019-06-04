#include <iostream>
using namespace std;

class Calculator
{
	void input()
	{
		cout<<"정수 2개 입력 : ";
		cin >> a>>b;
	}
	
	protected:
		int a,b;
		virtual int calc(int a,int b)=0;
	public:
		void run()
		{
			input();
			cout<< "계산 값 : " << calc(a,b) << endl;
		}
};

class Adder : public Calculator
{
	public:
		int calc(int a, int b)
		{
			return a+b;
		}
};

class Subtractor : public Calculator {
	public:
		int calc(int a, int b)
		{
			return a-b;
		}
};

int main()
{
	Adder adder;
	Subtractor subtractor;
	adder.run();
	subtractor.run();
}
