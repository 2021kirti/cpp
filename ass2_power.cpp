#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter the value of x and y:-";
	cin>>x>>y;
	int result=pow(x,y);
	cout<<x<<"^"<<y<<"="<<result;
	return 0;
}