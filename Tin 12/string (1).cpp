#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ifstream cin("string.inp");
   ofstream cout("string.out");
   string s1, s2;
   
   while (cin >> s1 && cin >> s2)
     {
   	    if (s1 == "END" && s2 == "END") break;
   	    if (s1.length() != s2.length()) 
   	                 {
   	                      cout << "different" << "\n" ;
						  continue;	
					 }
		bool check = true;
   	    vector <ll> a(130,0),b(130,0);
   	    
   	         for (int i = 0 ; i < s1.length(); i++)
   	               {
				    a[s1[i]]++;
   	                b[s2[i]]++;
   	               }
   	               
   	         for (int i = 'a' ; i <= 'z' ; i++)
   	               if (b[i] != a[i])
   	                               {
   	                                   cout << "different"<<"\n";
   	                                   check = false;
									   break;	
								   }
		if (check) cout<<"same"<<"\n";
	 }	
}
