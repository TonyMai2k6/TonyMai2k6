#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool prime[1250000];
vector<ll> primes;
void sang()
{
    memset(prime,true,1250000);
    prime[0]=prime[1]=false;
    for(int i=2;i*i<1250000;i++)
    {
        if(prime[i])
        {
            primes.push_back((long long)(i));
            for(int j=i*i;j<1250000;j+=i)
            prime[j]=false;
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sang();
    int T;cin>>T;
    ll N,ans;
    int k;
    
    while(T--)
    {
        ans=1;
        cin>>N>>k;
        for(int i=0;i<k;i++) ans*=primes[i];
        int j=k;
        if(ans>N) 
        {
            cout<<-1<<endl;continue;
        }
        while(ans<=N&&j<primes.size())
        {
            ans/=primes[j-k];
            ans*=primes[j];
            j++;
        }
        j--;
        ans/=primes[j];
        ans*=primes[j-k];
        cout<<ans<<endl;
    }
    return 0;
}
