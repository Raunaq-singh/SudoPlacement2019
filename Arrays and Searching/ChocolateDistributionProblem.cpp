#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    ll m;
	    cin>>m;
	    sort(a,a+n);
	    /*
	    for(ll i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<"\n";
	    */
	    ll ans=a[m-1]-a[0];
	    for(ll i=m;i<=n;i++){
	        ans=min(ans,a[i-1]-a[i-m]);
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}