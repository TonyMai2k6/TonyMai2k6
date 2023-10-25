#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ifstream cin("bai5.inp");
	ofstream cout("bai5.out");
	int t,m;cin>>t>>m;
	if(t%m==0) cout<<t/m;
	int first;
	int nguyen;
	string tp="";
	bool flag;
	if(t>m) 
	{
		nguyen=t/m;
		t%=m;
		first=t;
		int i=0;
		while(1)
		{
			i++;
			if(t==0) 
			{
				flag=true;break;
			}
			if(t==first&&i!=1) 
			{
				flag=false;break;
			}
			t*=10;
			tp+=char(t/m+'0'),t%=m;
		}
		if(flag)
		{
			cout<<nguyen<<"."<<tp;
		}
		else
		{
			cout<<nguyen<<".("<<tp<<")";
		}
	}
	else
	{
		nguyen=0;
		first=t;
		int i=0;
		while(1)
		{
			i++;
			if(t==0) 
			{
				flag=true;break;
			}
			if(t==first&&i!=1) 
			{
				flag=false;break;
			}
			t*=10;
			tp+=char(t/m+'0'),t%=m;
		}
		if(flag)
		{
			cout<<nguyen<<"."<<tp;
		}
		else
		{
			cout<<nguyen<<".("<<tp<<")";
		}
	}
	return 0;
}
