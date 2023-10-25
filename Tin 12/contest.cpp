#include<bits/stdc++.h>
#define lli long long int
#define fr(a,b,c,d) for(lli a=b;a<c;a+=d)
using namespace std;
struct baitoan
{
	string ten;
	lli diem;
};
int main()
{
	ifstream cin("contest.inp");
	ofstream cout("contest.out");
	vector<baitoan> s;
	lli a,b,c;
	cin>>a>>b>>c;
	fr(i,0,a,1)
	{
		baitoan d;
		string k;
		cin>>k;
		d.ten=k,d.diem=0;
		s.push_back(d);
	}
	vector<baitoan> q;
	fr(i,0,b,1)
	{
		baitoan d;
		string k;lli z;
		cin>>k>>z;
		d.ten=k,d.diem=z;
		q.push_back(d);
	}
	string l="AC";
	fr(i,0,c,1)
	{
		string x,y,z;
		cin>>x>>y>>z;
		if(z==l)
		{
			fr(j,0,a,1) if(x==s[j].ten)
			{
				fr(ii,0,b,1)
				{
					if(y==q[ii].ten)
					{
						s[j].diem+=q[ii].diem;
						j=a,ii=b;
					}
				}
			}
		}
	}
	fr(i,0,a,1)
	cout<<s[i].ten<<" "<<s[i].diem<<endl;
}
