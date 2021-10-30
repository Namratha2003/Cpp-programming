#include<iostream>
using namespace std;
int sec(int a,int b,int c)
{
	int d=c+(b*60)+(a*360);
	return d;
}
int main(){
	cout<<"Enter time: "<<endl;
	cout<<"\tHours? ";
	int h,m,s;
	cin>>h;
	cout<<"\tMinutes? ";
	cin>>m;
	cout<<"\tSeconds? ";
	cin>>s;
	cout<<"\tThe time is = "<<h<<":"<<m<<":"<<s<<endl;
	int a=sec(h,m,s);
	cout<<"\tTime in total seconds: "<<a<<endl;
	return 0;
}
