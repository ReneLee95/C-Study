#include "iostream"
using namespace std;

int main()
{
	int arr[100]={0,};
	int a,b;
	int min;
	cin>>a;
	for(int i=0; i<a; i++)
	{
		cin>>b;
		arr[i]=b;
	}
	min=arr[0];
	
	for(int i=0; i<a; i++)
	{
		if(arr[i]<min)
		{
		min=arr[i];
		}
	}
	cout<<min;
	return 0;
}


