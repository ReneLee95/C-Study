#include <iostream>
using namespace std;

class A
{
   private :
      int f;
   public :
      B(int s)
      {
         f=s;
      }
};

int main()
{
   A a;
   a.B(15);
   a.B(30);
   return 0;
}
