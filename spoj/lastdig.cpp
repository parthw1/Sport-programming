#include <bits/stdc++.h>
using namespace std;
int main() {
	short int t,a,i,r;long long b;
	cin>>t;
	while(t--)
	  {
	    cin>>a>>b;
	    int res = 1;
            a = a % 10;    
    while (b > 0) 
    { 
        if (b & 1) 
            res = (res*a) % 10; 
          b = b>>1; 
        a = (a*a) % 10;   
    }
    cout<<res<<"\n";
	  }
	return 0;
}
