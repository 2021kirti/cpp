#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,b,no;
	cout<<"enter the no";
	cin>>no;
	b=no;
	while(no>0)
	{
		i=no%10;
		sum=sum+i*i*i;
		no=no/10;
	}
	if(sum==b)
	{
		cout<<"no is amstrong";
	}
	else
	{
		cout<<"no is not amstrong";
	}
	
}