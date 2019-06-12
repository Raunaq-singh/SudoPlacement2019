#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
	    ll n,d;
	    cin>>n>>d;
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    ll temp;
	    ll ans=0;
	    for(ll i=0;i<n;i++){
	        cin>>temp;
	        //cout<<(a[i]&1)<<"\n";
	        if((a[i]&1)!=(d&1)){
	            ans+=temp;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}