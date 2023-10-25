#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool a[1000000];
void sang()
{
	a[0] = false;
	a[1] = false;
	memset (a, true, sizeof(a));
	for (int i = 2 ; i * i <= 1000000 ; i++)
	    {
	    	if (a[i])
	    	      for (int j = i * i ; j <= 1000000 ; j +=i)
	    	                  a[j] = false;
		}
}
int main()
{
   //ifstream cin("SPNUM.inp");
   //ofstream cout("SPNUM.out");
 
    ll k, ans = 0;
    cin >> k;
    sang();
    
    for (int i = 2 ; i * i <= k ; i++)
        if (a[i]) ans++;
             
    cout<<ans;
}
