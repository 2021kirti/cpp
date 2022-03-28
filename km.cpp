#include<iostream>
using namespace std;

int main()
{
	int no,i,fact=1;
	cout<<"enter any no:-";
	cin>>no;
	i=1;
	while(i<=no)
	{
		fact=fact*i;
		i++;
	}
	cout<<"factorial of no"<<fact;
	return 0;
}
	