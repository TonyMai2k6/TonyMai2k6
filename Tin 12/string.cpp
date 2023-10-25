#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool solve(string a,string b)
{
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	if(a==b) return 1;
	return 0;
}
int main()
{
	ifstream cin("string.inp");
	ofstream cout("string.out");
	string a,b;
	while(1)
	{
		cin>>a>>b;
		if(a=="END") break;
		if(solve(a,b)) cout<<"same"<<endl;
		else cout<<"different"<<endl;
	}
}
