#include <iostream>
using namespace std;

int main()
{
	int i,j;
    int n;
	int a[1001];
	int t;
   	cin>>n;
    for(i=1 ; i<=n ; i++)
    {
    	cin>>a[i];
	}


    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
           cout <<a[j]<<" ";
    	}
		t=a[1];
        for(j=1 ; j<=n-1 ; j++)
        {
			a[j]=a[j+1];
		}
        a[n]=t;

        cout<<endl;
    }
}

