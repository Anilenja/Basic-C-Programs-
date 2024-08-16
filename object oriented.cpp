#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length,breadth,area=0;
	public:
		void getrectangle()
		{
			cout<<"enter leangth=";
			cin>>length;
			cout<<"\nenter breadth=";
			cin>>breadth;
		}
		void display()
		{
			cout<<"\nlength="<<length;
			cout<<"\nbreadth="<<breadth;
		}
		void calculatearea()
		{
		area=length*breadth;
		cout<<"\narea ="<<area;	
		}
 };
 int main()
 {
 	rectangle r;//object
 	r.getrectangle();
 	r.display();
 	r.calculatearea();
return 0;
 }
