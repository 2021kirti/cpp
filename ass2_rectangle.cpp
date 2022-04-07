#include<iostream>
using namespace std;
int main()
{
	int area,peri,l,w;
	cout<<"enter the length of rectangle:-";
	cin>>l;
	cout<<"enter the width of rectangle:-";
	cin>>w;
	area=(l*w);
	peri=2*(l*w);
	cout<<"area of rectangle is:-"<<area;
	cout<<"perimeter of rectangle is:-"<<peri;
	return 0;
}