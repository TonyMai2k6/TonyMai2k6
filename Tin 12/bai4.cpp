#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ifstream cin("bai4.inp");
	ofstream cout("bai4.out");
	int n,k,b;
	ll ans=0;
	cin>>n>>k>>b;
	ll a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	a[0]=a[n];
	b%=n;
	for(int i=0;i<k;i++)
	ans+=a[(i+b)%n];
	cout<<ans;
	return 0;
}
