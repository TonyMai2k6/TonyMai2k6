#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll nC2(ll n)
{
	return n*(n-1)/2;
}

int main()
{
//	ifstream cin("longk.inp");
//	ofstream cout("longk.out");

	ll n;cin>>n;
	vector<int> a(n);
	vector<ll> b(300000,0);
	for(int i=0;i<n;i++) cin>>a[i],b[a[i]]++;
	ll tong=nC2(b[0]);
	for(int i=1;i<n;i++) tong+=nC2(b[i]);
	for(int i=0;i<n;i++) cout<<tong-nC2(b[a[i]])+nC2(b[a[i]]-1)<<endl;
}
