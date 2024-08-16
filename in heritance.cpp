#include<iostream>
using namespace std;
class A
{
	protected:
		int i,j;
	public:
	A()
	{
	i=j=0;		
	}
};
class B:public A
{
	int k;
	public:
		B(int i,int j,int k)
		{
			this->i=i;
			this->j=j;
			this->k=k;
		}
		void display()
		{
			cout<<i<<" "<<j<<"  "<<k;
		}
};

int main() {
int main() {
    B objB(1, 2, 3);
    objB.display();
    return 0;
}

