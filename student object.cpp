#include<iostream>
using namespace std;
class student
{
	private:
		double rollno;
		char name[30];
		char dept[10];
	public:
		void getstudent()
		{
			cout<<"\nEnter Student Number:";
			cin>>rollno;
			cout<<"\nEnter Student Name:";
			cin>>name;
			cout<<"\nEnter Student Dept:";
			cin>>dept;
		}
		void display()
		{
			cout<<"\n";
			cout<<"\nEnter Student Number:"<<rollno<<"\nEnter Student Name:"<<name<<"\nEnter Student Dept:"<<dept;
		}
    	void displaySize() 
		{
        cout << "\n\nSize of student object: " << sizeof(student) << " bytes" << endl;
    }
 };
 int main()
 {
 	int n,i;
 	cout<<"Enter the number of students:";
 	cin>>n;
	student s[n];
	for(i=0;i<n;i++)
 	s[i].getstudent();
 	for(i=0;i<n;i++)
 	s[i].display();
return 0;
 }
