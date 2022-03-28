#include<iostream>
using namespace std;
int main()
{
	int num=1,i,n;
	float sum,fact;
	while(num<=n)
	{
		fact=1;
		for(i=1;i<=num;i++)
		{
			fact=fact*i;
		}
		sum=sum+(num/fact);
		num++;
	}
	cout<<"sum of series is"<<sum;
	return 0;
	}
