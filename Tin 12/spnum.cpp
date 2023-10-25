#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool ngto[1000005];
void sang()
{
	memset(ngto,true,sizeof(ngto));
	ngto[0]=ngto[1]=false;
	for(int i=2;i*i<1000005;i++)
	{
		if(ngto[i])
		for(int j=i*i;j<1000005;j+=i)
		ngto[j]=false;
	}
}
int main()
{
	ifstream cin("spnum.inp");
	ofstream cout("spnum.out");
	ll n;
	int ans=0;
	cin>>n;
	ll a=sqrt(n);
	sang();
	for(ll i=a;i>=0;i--)
	if(ngto[i]) 
	{
		ans++;
	}
	cout<<ans;
}
