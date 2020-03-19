#include <bits/stdc++.h>
using namespace std;

bool ptwo(long long n) 
{ 
   return (ceil(log2(n)) == floor(log2(n))); 
}

int main()
{
  long long n;
  cin>>n;
  if(ptwo(n))
    cout<<"TAK\n";
  else
    cout<<"NIE\n";
  return 0;
}


