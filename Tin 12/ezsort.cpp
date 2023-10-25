#include<bits/stdc++.h>

using namespace std;

int n,a[300001],ans,res=0,k,m;

int solve()
{
 	for (int i=1;i<=n;i++)
 		if ( a[i] == n ) 
 		{
 			k=i;
 			break;
		 }
		 while ( k != 0 )
		 {
		 	if (a[k] == m)
		 	{
		 		res++;
		 		m=m-1;
			 }
			 k--;
		 }
	return(n-res);
}

int main()
{
	ifstream cin("ezsort.inp");
	ofstream cout("ezsort.out");
	cin>>n;
	m=n;
	for (int i=1;i<=n;i++)
	   cin>>a[i];
	cout<<solve();
}
