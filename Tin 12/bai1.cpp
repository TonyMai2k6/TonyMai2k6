#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sum2(ll n)
{
	return n*(n+1)/2;
}
ll sumsq(ll n)
{
	return n*(n+1)*(2*n+1)/6;
}

int main()
{
	ifstream cin("minsum.inp");
	ofstream cout("minsum.out");

	ll k,t=1,ans;cin>>k;
	while(sum2(t)<=k)
	{
		t++;
	}
	ans=sumsq(t-1);
	ans+=(k-sum2(t-1))*(t);
	cout<<ans;
	
}
