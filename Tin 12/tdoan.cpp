#include<bits/stdc++.h>
using namespace std;
int main()
{
	ifstream cin("tdoan.inp");
	ofstream cout("tdoan.out");
	int n,k;cin>>n>>k;
	int a[n],b[n];
	b[-1]=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(k==a[i]) 
		{
			cout<<i+1<<" "<<1;return 0;
		}
		b[i]=b[i-1]+a[i];
	}
	for(int t=2;;t++)
	{
		for(int i=0;i<=n-t;i++)
		if(b[i+t-1]-b[i-1]==k)
		{
			cout<<i+1<<" "<<t;return 0;
		}
	}
	cout<<0;return 0;
}
