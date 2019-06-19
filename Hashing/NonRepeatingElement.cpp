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
	    unordered_map<ll,ll>m;
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	        m[a[i]]++;
	    }
	    ll ans=0;
	    for(ll i=0;i<n;i++){
	        if(m[a[i]]==1){
	            ans=a[i];
	            break;
	        }
	    }
	    cout<<ans<<"\n";
	    //cout<<"\n";
	}
	return 0;
}