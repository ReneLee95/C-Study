#include <iostream>
using namespace std;

class A
{
   public:
   A()
   {
      a=100;
   }
   public :
      int a;
      A(int b)
      {
         a=b;
         cout<<a+b<<endl;
      }
};

int main()
{
   A com(50);
   com.a = 50;
   A com2(77);
}
