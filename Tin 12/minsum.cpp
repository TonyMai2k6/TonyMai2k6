#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ifstream cin("minsum.inp");
	ofstream cout("minsum.out");
	ll a,b;
	cin>>a>>b;
	if(a>b) swap(a,b);
	ll t=a*b;
	for(ll i=sqrt(t)/a*a;i>=a;i-=a)
	{
		if(t%i==0&&b%i==0&&b%(t/i)==0) 
		{
			cout<<t/i+i; return 0;	
		}
	}
}
