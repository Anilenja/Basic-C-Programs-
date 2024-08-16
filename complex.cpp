#include<iostream>
using namespace std;
class complex
{
	private:
		int real;
		float img;
	public:
		void getcomplex()
		{
			cout<<"\nEnter Real Number:";
			cin>>real;
			cout<<"\nEnter Img Nuumber:";
			cin>>img;
			
		}
		void display()
		{
			cout<<"\n The Complex Number is :"<<real<<"+i"<<img;
		}
    	void addComplex(complex c1,complex c2)
    	{
    		complex c3;
    		c3.real=c1.real+c2.real;
    		c3.img=c1.img+c2.img;
    		cout<<"\nThe resultant number is:"<<c3.real<<"+i"<<c3.img;
		}
 };
 int main()
 {
 	complex c1,c2;
	 c1.getcomplex();
	 c2.getcomplex();
	 c1.display();
	 c2.display();
	 c1.addComplex(c1,c2);	
return 0;
 }
