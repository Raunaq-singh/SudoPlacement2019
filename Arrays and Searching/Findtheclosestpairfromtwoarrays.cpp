#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mn=INT_MAX;
ll rec(ll a[],ll x,ll m)
{
    ll i=0,j=m-1,mid,ans;
    while(i<=j)
    {
        mid=(j+i)/2;
        if(a[mid]>x)
        {
            if(a[mid]-x<mn)
            {
                mn=a[mid]-x;
                ans=a[mid];
            }
            j = mid - 1;
        }
        else if(a[mid]<x)
        {
            if(x-a[mid]<mn)
            {
                mn=x-a[mid];
                ans=a[mid];
            }
            i = mid + 1;
        }
        else 
        {
            ans = a[mid];
            break;
        }
    }
    return ans;
}
int main()
 {
	//code
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,m,k;
	    cin>>n>>m;
	    ll a[n],b[m];
	    for(ll i=0;i<n;i++) cin>>a[i];
	    for(ll i=0;i<m;i++) cin>>b[i];
	    cin>>k;
	    sort(a,a+n);sort(b,b+m);
	    
	    mn=INT_MAX;
	    ll mn1=INT_MAX,ans1,ans2;
	    
	    for(ll i=0;i<n;i++)
	    {
	        ll y = rec(b,k-a[i],m);
	        if(abs(k-a[i]-y)<mn1)
	        {
	            mn1 = abs(k-a[i]-y);
	            ans1 = a[i];
	            ans2 = y;
	        }
	    }
	    cout<<ans1<<" "<<ans2<<endl;
	    
	}
	return 0;
}