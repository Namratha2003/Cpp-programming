//eligibility for voting
#include<iostream>
using namespace std;
int main()
{
	int age;
	string name; 
	cout<<"Enter your name and age please: ";
	cin>>name>>age;
	if (age>=18)
	{
		cout<<"Hello "<<name<<" you are eligible to vote";
	}
	else
	{
		cout<<"Sorry "<<name<<" you are not eligible to vote";
	}
	
}
