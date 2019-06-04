#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int *a[10], *b[10],*c[10];
	int k;
	cin>>k;
	for(int i=0; i<k; i++)
	{
		a[i] = (int *)malloc(sizeof(int)*k);
		b[i] = (int *)malloc(sizeof(int)*k);
		c[i] = (int *)malloc(sizeof(int)*k);
	}
	for(int i=0; i<k; i++)
	{
		for(int j=0; j<k; j++)
		{
			a[i][j] = 2 + (j+i);
			b[i][j] = k - (i+j+1);
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(int i=0; i<k; i++)
	{
		for(int j=0; j<k; j++)
		{
			cout<<c[i][j]<<" ";
		}
	}
	cout << endl;
	cout << endl;
	return 0;
}
	
	
