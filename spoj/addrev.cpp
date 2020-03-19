#include <bits/stdc++.h>

using namespace std;

int reverse(int num)
{
	int revnum=0;
	while(num>0)
	{
		revnum+=num%10;
		num=num/10;
		if(num!=0)
		revnum*=10;
	}	
	return revnum;
}


int main()
{
	int t,a,b,sum;
  	scanf("%d",&t );
  	while (t--)
  	{
		cin>>a>>b;
		a=reverse(a);
		b=reverse(b);
		sum=a+b;
		sum=reverse(sum);
		cout<<sum<<endl;
	}
	return 0;
}	
