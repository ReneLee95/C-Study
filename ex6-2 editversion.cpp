#include "iostream"
using namespace std;

int sum(int a, int b)
{
	int total =0;
	int sum;
	int arr[100];
	for(int i=0; i<=b; i++)
	{
		arr[i] = i;
	}
	for(int i=0; i<=b; i++)
	{
		total +=arr[i];
	}
	cout<<total <<endl;
}

int sum(int a)
{
	int total =0;
	int arr[100];
	for(int i=0; i<=a; i++)
	{
		arr[i] =i;
	}
	for(int i=0; i<=a; i++)
	{
		total +=arr[i];
	}
	cout<<total<<endl;
}

int main()
{
	sum(10,24);
	sum(5);
	sum(30);
}
