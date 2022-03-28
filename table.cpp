#include<iostream>
using namespace std;
int main()
{
	int no,i;
	cout<<"enter the number";
	cin>>no;
	cout<<"table of"<<no;
	for(i=1;i<=10;i++)
	{
		cout<<no<<"*"<<i<<"="<<no*i<<"\n";
		
	}
	return 0;
}