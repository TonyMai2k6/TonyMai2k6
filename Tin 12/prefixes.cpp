#include<bits/stdc++.h>
#define lli long long int
#define fr(a,b,c,d) for(lli a=b;a<c;a+=d)
using namespace std;
int main()
{
	ifstream cin("prefixes.inp");
	ofstream cout("prefixes.out");
lli n;
cin>>n;
	string s;
	cin>>s;
	lli k,l=0;
	k=0;
	fr(i,0,s.length(),1)
	{
		if(s[i]=='a') k++;
		else k--;
		if(i!=0&&i%2==1)
		{
			if(k!=0) l++;
			if(k==2) s[i]='b';
			if(k==-2) s[i]='a';
			k=0;
		}
	}
	cout<<l<<endl<<s;
}
