#include<iostream>
using namespace std;
//static polymorphism
class A {
protected:
    int a;
public:
    void inputA()
	{
   	 a=100;
    }
    void inputA(int a)
    {
    	this->a=a;
	}
    void displayA() {
        cout << "a=" << a <<"\n";
    }
};
int main() {
    A aobj1;
   aobj1.inputA();
    A aobj2;
   aobj2.inputA(1000);
   aobj1.displayA();
   aobj2.displayA();
   }

