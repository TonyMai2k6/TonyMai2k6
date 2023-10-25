#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ifstream cin("seq.inp");
	ofstream cout("seq.out");
	int n;cin>>n;ll Max=-999999999999999;
	vector<ll> a(n,0);
	vector<ll> b(n,0);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i==0)
		{
			b[i]=a[i];	
		}
		else
		{
			b[i]=min(b[i-1],a[i]);
		}
	}
	
	for(int i=1;i<n;i++)
	{
		Max=max(Max,a[i]-b[i-1]);
	}
	cout<<Max;
}
