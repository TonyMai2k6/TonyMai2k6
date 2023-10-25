#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll m,n;cin>>n>>m;
	ll t=pow(10,n-1);
	ll ans=0,a,prev;
	for(ll i=t;i<t*10;i++)
	{
		a=235;
		if(a%10!=2&&a%10!=3&&a%10!=5&&a%10!=7) continue;
		a/=10;
		prev=a%10;
		while(a)
		{
			if(a%10==prev) break;
			prev=a%10;
			a/=10;
		}
		if(a==0) ans++; 
	}
	cout<<ans;
}
