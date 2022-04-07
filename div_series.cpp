#include<iostream>
using namespace std;
int main()
{
	int i,n,sum;
	
	cout<<"\n";
	cout<<"enter the term:-";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum+=i/i;
		cout<<"i"<<"/"<<"i"<<"="<<i/i;
		cout<<"\n";
	}
	cout<<"the sum of above series is:"<<sum;
	return 0;
}