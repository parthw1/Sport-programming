//Author:Parth Wazurkar
//isn't iostream too mainstream
//#include <iostream.h>
#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL; 
typedef long double LD;

const int MAX	= 1e5 + 5;
const int LIM	= 3e5 + 5;
const int MOD	= 1e9 + 7;
const LD  EPS	= 1e-10;
const double PI = acos(-1.0);

#define fastio			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define Assert(x)		{if(!(x)){cerr<<"Assertion failed at line "<<__LINE__<<": "<<#x<<" = "<<(x)<<"\n";exit(1);}}
#define inchar			getchar//_unlocked
#define outchar(x)		putchar(x)//_unlocked(x)

double tick(){static clock_t oldt,newt=clock();double diff=1.0*(newt-oldt)/CLOCKS_PER_SEC;oldt=newt;return diff;}

template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);}
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));}

int add(int a, int b, int c){int res=a+b;return(res>=c?res-c:res);}
int mod_neg(int a, int b, int c){int res;if(abs(a-b)<c)res=a-b;else res=(a-b)%c;return(res<0?res+c:res);}
int mul(int a, int b, int c){LL res=(LL)a*b;return(res>=c?res%c:res);}
LL mulmod(LL a,LL b, LL m){LL q = (LL)(((LD)a*(LD)b)/(LD)m);LL r=a*b-q*m;if(r>m)r%=m;if(r<0)r+=m;return r;}

template<typename T>T expo(T e, T n){T x=1,p=e;while(n){if(n&1)x=x*p;p=p*p;n>>=1;}return x;}
template<typename T>T power(T e, T n, T m){T x=1,p=e;while(n){if(n&1)x=mul(x,p,m);p=mul(p,p,m);n>>=1;}return x;}
template<typename T>T extended_euclid(T a, T b, T &x, T &y){T xx=0,yy=1;y=0;x=1;while(b){T q=a/b,t=b;b=a%b;a=t;\
t=xx;xx=x-q*xx;x=t;t=yy;yy=y-q*yy;y=t;}return a;}
template<typename T>T mod_inverse(T a, T n){T x,y,z=0;T d=extended_euclid(a,n,x,y);return(d>1?-1:mod_neg(x,z,n));}

#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)

bool prime[10000],visited[10000];
int d[10000];
void genprime(int a, int b)
{
  int p,l,i;
  memset(prime,true,sizeof(prime));
  for(p=2;p*p<=b;p++)
  {
    l=a/p;
    l*=p;
    for(i=l;i<=b;i+=p)
    {
      if(i>=a && i!=p)
        prime[i]=false;
    }
  }
}

int bfs(int a, int b)
{
  memset(visited,false,sizeof(visited));
  memset(d,-1,sizeof(d));
  queue<int>q;
  q.push(a);
  visited[a]=true;
  int c=0,i,temp,j,h,u;
  char num[8];
  d[a]=0;
  
}
int main()
{
  //#ifndef ONLINE_JUDGE
  //	freopen("inp.txt", "r", stdin);
  //#endif
  fastio;
  int t,a,b;
  cin>>t;
  while(t--)
  {
    cin>>a>>b;
  }
  //cout<<"Execution time : "<<tick()<<"\n";
  return 0;
}
//isn't my code amazing?
