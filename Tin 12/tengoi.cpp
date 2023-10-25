#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ifstream cin("tengoi.inp");
    ofstream cout("tengoi.out");
    int n,t,MAX=0;cin>>n;
    string s;
    int a[69696];
    memset(a,0,69696);
    while(n--)
    {
    	cin>>s;
    	t=0;
    	for(int i=0;i<s.length();i++)
    	{
    		if(s[i]!='W'&&s[i]!='A'&&s[i]!='R') t++;
    		else a[t]++,MAX=max(MAX,t),t=0;
		}
	}
	cout<<MAX<<" "<<a[MAX];
}
