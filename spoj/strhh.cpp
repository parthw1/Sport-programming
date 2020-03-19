#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int t,l,i;
	char ip[100];
	cin>>t;
	while(t--)
	{
		cin>>ip;
		l=strlen(ip)/2;
		for(i=0;i<l;)
		{
			cout<<ip[i];
			i+=2;
		}
		cout<<endl;
	}
	return 0;
}
