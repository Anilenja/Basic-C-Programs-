#include<iostream>
using namespace std;
//dynamic polymorphism
class base
 {
	public:
		virtual void show()
		{
			cout<<"in base class show\n";
		}
	};
	class derived:
		public base
		{
		public:
		
			void show()
			{
				cout<<"in derived class show";
			}
		};
int main()
{
	base *bref;
	base *bobj=new 
	base bobj;
	bobj.show();
	derived dobj;
	dobj.show();
}
