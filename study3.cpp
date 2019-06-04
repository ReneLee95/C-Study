#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
		int *a;
		int *b;
		a = (int *)malloc(sizeof(int));
		b = (int *)malloc(sizeof(int));	
		
		*a = 3;
		*b = 5;
	
	cout << a <<"  "<<b;
	
	free(a);
	free(b);
}
