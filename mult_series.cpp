#include<iostream>
using namespace std;
int main()
{
	int i,n,sum;
	cout<<"\nfind the sum of series(1*1)+(2*2)+(3*3)+(4*4)+...+(n*n):\n";
	cout<<"\n";
	cout<<"enter the term:-";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum+=i*i;
		cout<<"i"<<"*"<<"i"<<"="<<i*i;
		cout<<"\n";
	}
	cout<<"the sum of above series is:"<<sum;
	return 0;
}