#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter the nuumber of rows:";
	cin>>n;
	for(i=1;i<=n;i++,cout<<"\n")
	for(j=1;j<=i;j++)
	cout<<j;
	return 0;
}
