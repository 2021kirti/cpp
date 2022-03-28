#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int ch;
	cout<<"enter first no:-"<<"\n";
	cin>>a;
	cout<<"enter second no:-"
	cin>>b;
	do
	{


	cout<<"1.addition"<<"\n";
	cout<<"2.substraction"<<"\n";
	cout<<"3.multiplication"<<"\n";
	cout<<"4.division"<<"\n";
	cin>>ch;

	cout<<"enter user choice:"<<"\n";
	cin>>a>>b;
	switch(ch)
	{
		case 1:
		cout<<"addition:"<<a+b;
		break;

		case 2:
		cout<<"substraction:"<<a-b;
		break;

		case 3:
		cout<<"multiplication:"<<a*b;
		break;

		case 4:
		cout<<"division:"<<a/b;
		break;
	}
	}while (ch!=4);
	}