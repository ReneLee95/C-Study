#include <iostream>
#include <stdlib.h>
using namespace std;

class A
{
   public :
      A()
      {
         for(int i=0; i<7; i++)
         {
            int a;
            a= rand() % 100;
            if(a%2 ==1)
            {
               cout <<a <<endl;
            }
            else
            {
               cout <<a+1<<endl;
            }
         }
      }
};

class B
{
   public :
      B()
      {
         for(int i=0; i<5; i++)
         {
            int b;
            b= rand() % 100;
            if(b%2==0)
            {
               cout << b<<endl;
            }
            else
            {
               cout <<b+1<<endl;
            }
            
         }
      }
};

int main()
{
   int c;
   cout<<"È¦¼ö 1 Â¦¼ö 2"<<" : " <<endl;
   cin>>c;
   if(c==1)
   {
      A();
   } 
   else if(c==2)
   {
      B();
   }
   return 0;
}
