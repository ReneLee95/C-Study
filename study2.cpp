#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int *ptr[10][10];
	int k=0;
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			ptr[i][j] = (int *)malloc(sizeof(int *)*10);
		}
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			*ptr[i][j] =k;
			k++; 
		}
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<*ptr[i][j]<<"   ";
		}
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			free(ptr[i][j]);
		}
	}
	
	return 0;
	
}
