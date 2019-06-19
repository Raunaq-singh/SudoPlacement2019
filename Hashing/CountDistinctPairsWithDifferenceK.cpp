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
	    ll a[n];
	    map<ll,ll>m;
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	        m[a[i]]++;
	    }
	    ll k;
	    cin>>k;
	    ll ans=0;
	    for(ll i=0;i<n;i++){
	        if(k==0){
	            if(m[a[i]]>1){
	                ans++;
	                m[a[i]]-=2;
	            }
	        }else{
	            if(m[a[i]+k]){
	                ans++;
	            }
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}