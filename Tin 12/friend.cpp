#include<bits/stdc++.h>
#define lli long long int
#define fr(a,b,c,d) for(lli a=b;a<c;a+=d)
using namespace std;
int main()
{
	ifstream cin("friend.inp");
	ofstream cout("friend.out");
	lli a,b;
	cin>>a>>b;
	lli c[a];
	fr(i,0,a,1) cin>>c[i];
	lli l=0;
	fr(i,0,a,1)
	{
		lli k=b-c[i];
		fr(j,i+1,a,1)
		{
			if(c[j]==k) l++;
		}
	}
	cout<<l;
}
