#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int Test;cin>>Test;
	ll a,b,x,y,n,A,B,X,Y,N,ans;
	while(Test--)
	{
		cin>>a>>b>>x>>y>>n;
		A=a;B=b;X=x;Y=y;N=n;
		if(a>b) swap(a,b),swap(x,y);
		if(a==b&&x>y) swap(x,y); 
		if(a-x>n)
		{
			ans=(a-n)*b;
		}
		else
		{
			n-=(a-x);
			a=x;
			if(b-y>n)
			{
				ans=a*(b-n);
			}
			else
			{
				ans=a*y;
			}
		}
		if(A<B) swap(A,B),swap(X,Y);
		if(A==B&&X<Y) swap(x,y); 
		if(A-X>N)
		{
			cout<<min(ans,(A-N)*B)<<endl;
			continue;
		}
		else
		{
			N-=(A-X);
			A=X;
			if(B-Y>N)
			{
				cout<<min(ans,A*(B-N))<<endl;
				continue;
			}
			else
			{
				cout<<min(ans,A*Y)<<endl;
			}
		}
	}
	return 69;
}
