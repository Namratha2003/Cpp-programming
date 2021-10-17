//accessing array elements
#include<iostream>
using namespace std;
int main()
{
	int *a,n;
	int ar[50];
	cout<<"Enter the number of array elements: ";
	cin>>n;
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	a=ar;
	for(int i=0;i<n;i++)
	{
		cout<<*a++<<" ";
	}
	return 0;
}
