#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ifstream cin("shenyun.inp");
    ofstream cout("shenyun.out");
    ll n,x,y;cin>>n>>x>>y;
    cout<<n/(x/__gcd(x,y)*y);
}
