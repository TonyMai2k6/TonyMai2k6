#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	ifstream cin("fibo.inp");
	ofstream cout("fibo.out");
	int n;
	int Max=1;
	vector<ll> fibo;fibo.push_back(0);
	fibo.push_back(1);
	while(cin>>n)
	{
		if(n>Max) Max=n;
		for(int i=fibo.size();i<=n;i++)
		{
			fibo.push_back(fibo[i-1]+fibo[i-2]);
		}
		cout<<fibo[n]<<endl;
	}
}
