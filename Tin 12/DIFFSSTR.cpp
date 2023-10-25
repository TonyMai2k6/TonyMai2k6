#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ifstream cin("DIFFSSTR.inp");
   ofstream cout("DIFFSSTR.out");
   ll n, l = 1; cin>>n;
   string s; cin>>s;
   while( l != n )
   {
   	    string a[n - l + 1];
		string m;
   	    bool check = true;
   	    
		for ( int i=0;i<n-l+1;i++)
		       {
		       	m = "";
		       	
		        for (int j=i;j<i+l;j++)
						m+=s[j];
				
				a[i] = m;
			   }
					
		
	    for (int i=0;i<n-l;i++)
		        {  
 				   for (int j=i+1;j<n-l+1;j++) 
				       {    
				            if (a[i]==a[j])
							    {
							        l++;
									check = false;
									break; 	
								} 	  
					   }        
				    if (!check) break;
				}
		if (check) break;
   }
   
   cout << l;
}
