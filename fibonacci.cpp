#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,c,no,i;
	cout<<"enter the term";
	cin>>no;
	cout<<a<<" "<<b<<" ";
	for(i=1;i<=no;i++)
	{
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
	return 0;
}