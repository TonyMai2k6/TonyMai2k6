#include<bits/stdc++.h>
using namespace std;
bool num(char c)
{
	return '0'<c&&c<='9';
}

int main()
{
	ifstream cin("mass.inp");
	ofstream cout("mass.out");
	char c;int t;
	vector<int> a;
	map <char,int> chem;
	chem['H']=1;
	chem['O']=16;
	chem['C']=12;
	while(cin>>c)
	{
		if(c=='(') a.push_back(-1);
		else if(num(c)) a[a.size()-1]*=(c-'0');
		else if(c==')')
		{
			t=0;
			while(a[a.size()-1]!=-1)
			{
				t+=a[a.size()-1];
				a.pop_back();
			}
			a.pop_back();
			a.push_back(t);
		}
		else a.push_back(chem[c]);
	}
	int ans=0;
	for(int i=0;i<a.size();i++) ans+=a[i];
	cout<<ans;
}
