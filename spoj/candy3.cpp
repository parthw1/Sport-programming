#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long t,n,sum,x,p;
  cin>>t;
  while(t--)
    {
      cin>>n;sum=0;p=n;
      while(n--)
	{
	  cin>>x;
	  sum=(sum+x)%p;
	}
      if(!sum)
	cout<<"YES\n";
      else
	cout<<"NO\n";
    }
  return 0;
}
