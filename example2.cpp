#include <iostream>
#include <cstdlib>
using namespace std;

void swap(int *a,int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}


int main()
{
	int m=3;
	int n=2;
	swap(&m,&n);
	cout<<m<<"  "<<n<<endl;
}
