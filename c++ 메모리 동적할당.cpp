#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int *a[100001];
	int b;
	int k=0;
	cout<<"숫자를 입력하세요 : ";
	cin>>b;
	
	for(int i=0; i<b; i++)
	{
		a[i] = (int *)malloc(sizeof(int)*b);
	}
	
	for(int i=0; i<b; i++)
	{
		*a[i] = k;
		k++;
	}
	
	for(int i=0; i<b; i++)
	{
		cout<<*a[i]<<endl;
		free(a[i]);
	}
	
	return 0;
}
