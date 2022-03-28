#include<iostream>
using namespace std;
int main()
{
	int i,no,sum=0;
	cout<<"enter the no";
	cin>>no;
	while(no>0)
	{
		i=no%10;
		sum=sum*10+i;
		no=no/10;
	}
	cout<<"reverse no"<<sum;
	return 0;
}