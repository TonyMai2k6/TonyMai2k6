#include<bits/stdc++.h>
using namespace std;
int main()
{
//	ifstream cin("bai4.inp");
//	ofstream cout("bai4.out");
	int n;cin>>n;float t=1;int a=1;
	if(n!=1)
	for(int i=1;i<n;i++)
	{
		
		if(t<10) {t*=10;i--;a++;t=t*a;}
		if(t>10) {t/=10;}
	}
	
	cout<<a;
	return 0;
}
