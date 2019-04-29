#include <iostream>
using namespace std;

class A
{
   public :
   struct data{
   char c[30];
   int s;
   private : 
   char d[30];
   public :
      U();
   }data;
};

int main()
{
   A a;
   a.data.s = 1;
   for(int i=0; i<3; i++)
   {
      a.data.c[i] = 'A';
      cout<<a.data.c[i]<<endl;
   }
   return 0;
}
