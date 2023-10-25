#include<bits/stdc++.h>
using namespace std;
int main()
{
	ifstream cin("chiamang.inp");
	ofstream cout("chiamang.out");
	int n;cin>>n;
	int a[n];
	int tong=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		tong+=a[i];	
	}
	int ans=0;
	for(int i=0;;i++)
	{
		ans+=a[i];
		if(2*ans==tong) 
		{
			cout<<i+1;return 0;
		}
		if(2*ans>tong)
		{
			cout<<0;return 0;
		}
	}
	cout<<0;
}
