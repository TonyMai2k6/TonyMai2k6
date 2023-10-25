#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ifstream cin("bai2.inp");
	ofstream cout("bai2.out");
	int n;cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	map<int,int> visit;
	for(int i=0;i<n;i++)
	{
		if(visit.find(a[i])!=visit.end()) visit[a[i]]++;
		else visit[a[i]]=1;
	}
	int ans=0;
	for(int i=0;i<n;i++)
	if(visit[a[i]]==1) ans++;
	cout<<ans<<endl;
	for(int i=0;i<n;i++)
	if(visit[a[i]]==1) cout<<a[i]<<endl;
}
