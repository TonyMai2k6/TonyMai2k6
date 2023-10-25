#include<bits/stdc++.h>
#define ll long long
using namespace std;
int solver(vector<int> a,int R)
{
	int l=0,r=a.size()-1,mid;
	if(R<a[0]) return -1;
	if(R>a[r]) return r;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(a[mid]==R) return mid;
		else if(a[mid]>R) r=mid-1;
		else l=mid+1;
	}
	while(1) 
	if(a[mid]<=R) 
	{
		return mid;	
	}
	else mid--;
}
int solvel(vector<int> a,int L)
{
	int l=0,r=a.size()-1,mid;
	if(L<a[0]) return 0;
	if(L>a[r]) return -1;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(a[mid]==L) return mid;
		else if(a[mid]>L) r=mid-1;
		else l=mid+1;
	}
	while(1) 
	if(a[mid]>=L) 
	{
		return mid;	
	}
	else mid++;
}
int main() {
    ifstream cin("cuocthi.inp");
    ofstream cout("cuocthi.out");
    int n,q,l,r;cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i]; 
    
    sort(a.begin(),a.end());
    while(q--)
    {
    	cin>>l>>r;
    	if(solver(a,r)==-1||solvel(a,l)==-1) cout<<0<<endl;
    	else cout<<solver(a,r)-solvel(a,l)+1<<endl;
	}
}
