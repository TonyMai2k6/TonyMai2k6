#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool ngto[1000100];
void sang()
{
	memset(ngto,true,sizeof(ngto));
	ngto[0]=ngto[1]=false;
	for(int i=2;i*i<1000100;i++)
	{ 
		if(ngto[i])
		for(int j=i*i;j<1000100;j+=i) ngto[j]=false;
	}
}
bool ac(int n,int h)
{
	while(n)
	{
		h-=n%10;
		n/=10;
		if(h<0) return false;
	}
	if(h>0) return false;
	return true;
}
int main()
{
	ifstream cin("DOCAO.inp");
	ofstream cout("DOCAO.out");
	int n,h;
	int ans=0;
	cin>>n>>h;
	sang();
	for(int i=0;i<=n;i++) if(ngto[i]&&ac(i,h)) cout<<i<<endl,ans++;
	cout<<ans;
}
