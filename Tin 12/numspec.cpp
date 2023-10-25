#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sq(ll n) 
{
	return n*n;
}
ll POW(ll a, ll b,ll m) {
    if (b==0) return 1;
    else 
        if (b%2==0)
            return sq(POW(a,b/2,m))%m;
        else
            return a*(sq(POW(a,b/2,m)))%m;
}
ll solve(ll n,ll m)
{
	ll t=pow(10,n-1);
	ll ans=0,a,prev;
	for(ll i=t;i<t*10;i++)
	{
		a=i;
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
	return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    if(n==1) 
    {
    	cout<<4%m;return 0;
	}
	if(n==2)
	{
		cout<<32%m;return 0;
	}
	ll ans=4*(8*8+9);
	cout<<ans*POW(9,n-3,m)%m<<" "<<solve(n,m);
}
