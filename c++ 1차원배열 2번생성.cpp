#include "iostream"
using namespace std;

int main()
{
    int arr[100]={0,};
    int a,b,c=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        arr[i]=b;
    }
    while(c<2)
    {
        for(int i=0; i<a; i++)
        {
            cout <<arr[i]<<endl;
        }
    c++;
    }
    return 0;
}

