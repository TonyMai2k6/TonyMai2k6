#include<bits/stdc++.h>
using namespace std;
struct ii
{
	int f,s;	
	ii input(int a,int b)
	{
		ii A;
		A.f=a;
		A.s=b;
		return A;
	}
} ;
ii input(int a,int b)
{
	ii A;
	A.f=a;
	A.s=b;
	return A;
}
int main()
{
	//ifstream cin("thaythe.inp");
	//ofstream cout("thaythe.out");
	int N,P,A,B,R,t,v;
	cin>>N>>P>>A>>B>>R;
	queue<ii> q;
	if(N==R)
	{
		cout<<0;return 0;
	}
	q.push(input((N+A)%P,1));
	q.push(input((N+B)%P,1));
	q.push(input((N+A+B)%P,1));
	while(1)
	{
		v=q.front().f;
		t=q.front().s;
		if(v==R)
		{
			cout<<q.front().s;return 0;
		}
		else
		{
			q.pop();
			q.push(input((v+A)%P,t+1));
			q.push(input((v+B)%P,t+1));
			q.push(input((v+A+B)%P,t+1));
		}
	}
}
