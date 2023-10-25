#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ifstream cin("bai3.inp");
	ofstream cout("bai3.out");
	string s;cin>>s;
	int a[10]={0,0,0,0,0,0,0,0,0,0};
	for(int i=0;i<s.length();i++)
	{
		int c=s[i]-'0';
		if(a[c]==0&&(c==2||c==3||c==5||c==7)) cout<<c<<" ",a[c]++; 
	}
	return 0;
}
