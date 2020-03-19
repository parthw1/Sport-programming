#include <bits/stdc++.h>
using namespace std;
int main()
{
  float t,k,sum;
  scanf("%f",&t);
  while(t)
    {
      sum=0.00;int i=0;
      while(sum<t)
	{
	  i++;
	  sum+=1.00/(1.00+i);
	}
      cout<<i<<" card(s)\n";
      scanf("%f",&t);
    }
  return 0;
}
