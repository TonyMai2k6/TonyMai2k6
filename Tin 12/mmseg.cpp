#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ifstream cin("mmseg.inp");
   ofstream cout("mmseg.out");
   ll n; cin>>n;
   ll  max = -3000000000, min = 3000000000;
   vector <ll> a(n);
   
      for (int i = 0 ; i < n ; i++)
                   cin >> a[i];
      
	  for (int i = 0 ; i < n ; i++)
           {
		     if (max < a[i]) max = a[i];
		     if (min > a[i]) min = a[i];
		   }
		   
	  ll vt1 = -1 , vt2 = -1, m = 3000000000 ;
	  
	  for (int i = 0 ; i < n ; i++)
	       {
	       	 if (a[i] == max ) vt1 = i;
	       	 if (a[i] == min ) vt2 = i;
				if ( vt1 != -1 && vt2 != -1 & m > abs(vt2 - vt1) )
	       	                                  m = abs(vt2 - vt1);
		   }
	
	  cout << m + 1; 
}
