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
//	ifstream cin("longfn.inp");
//	ofstream cout("longfn.out");

	ll n;cin>>n;
	if(n%2==1) cout<<-(n+1)/2;
	else cout<<n/2;
}
