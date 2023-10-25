#include <bits/stdc++.h>
#define ll long long
using namespace std;
int isfib(ll n,vector<ll> fib)
{
    for(int i=0;i<fib.size();i++) if(n==fib[i]) return 1;
    return 0;
}
int ans=0;
void solve(ll n,int i,vector<ll> fib,int t=0)
{
    if(n==1&&t) ans++;
    for(int j=i;j<fib.size()&&fib[j]<=n;j++)
    {
    	if(n==fib[j]&&t==0) return;
        if(n%fib[j]==0) solve(n/fib[j],j,fib,t+1);
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    ll n;
    vector<ll> fib;
    fib.push_back(1);
    fib.push_back(1);
    for(int i=2;;i++)
    {
        if(fib[i-1]+fib[i-2]>fib[i-1])
        fib.push_back(fib[i-1]+fib[i-2]);
        else break;
    }
    while(t--)
    {
        cin>>n;
        solve(n,2,fib);
        cout<<ans+isfib(n,fib)<<endl;
        ans=0;
    }
    return 0;
}
