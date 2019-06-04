#include <iostream>
#include <string>
using namespace std;

class tv
{
	int size;
	public:
		tv()
		{
			size = 20;
		}
		tv(int size)
		{
			this->size = size;
		}
		int getsize()
		{
			return size;
		}
};

class widetv : public tv
{
	bool  videoin;
	public:
		widetv(int size, bool videoin) : tv(size)
		{
			this->videoin = videoin;
		}
		
		bool getvideoin()
		{
			return videoin;
		}
};

class smarttv : public widetv
{
	string ipaddr;
	public:
		smarttv(string ipaddr, int size) : widetv(size,true)
		{
			this->ipaddr = ipaddr;
		}
		string getipaddr()
		{
			return ipaddr;
		}
};

int main()
{
	smarttv htv("192.0.0.1",32);
	cout << "size =" << htv.getsize() <<endl;
	cout << "videoin=" << boolalpha << htv.getvideoin() << endl;
	cout << "ip=" <<htv.getipaddr()<<endl;
}
