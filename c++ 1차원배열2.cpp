#include "iostream"
using namespace std;

int main()
{
	int arr[100]={0,};
	int a,b;
	cin>>a;
	for(int i=1; i<=a; i++)
	{
		cin>>b;
		arr[i]=b;
	}
	
	for(int i=a; i>0; i--)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}

