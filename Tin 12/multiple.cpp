#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	ifstream cin("multiple.inp");
	ofstream cout("multiple.out");
	ll ans=0;
	ll t=1;
	ll n,q;cin>>n>>q;
	ans+=t;
	for(int i=1;i<n;i++)
	{
		t*=q;
		t%=2023;
		ans+=t;
		ans%=2023;
	}
	cout<<ans;
}
