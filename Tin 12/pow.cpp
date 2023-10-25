#include<bits/stdc++.h>
#define lli long long int
#define fr(a,b,c,d) for(lli a=b;a<c;a+=d)
using namespace std;
int main()
{
	ifstream cin("pow.inp");
	ofstream cout("pow.out");
	lli a,b,c,d;
	cin>>a>>b>>c;
	if(a>c||c>b) cout<<-1;
	lli k=0,l=0;
	while(pow(c,k)<a) k++;
	while(pow(c,l)<=b) l++;
	fr(i,k,l,1) cout<<pow(c,i)<<" ";
}
