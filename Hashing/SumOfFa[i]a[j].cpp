#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll sum=0;
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    //map<ll,ll>m;
	    //set<ll>s;
	    ll ans=0;
	    for(ll i=0;i<n;i++){
	        for(ll j=i+1;j<n;j++){
	            if(abs(a[i]-a[j])!=1){
	                ans+=(a[j]-a[i]);
	            }
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}