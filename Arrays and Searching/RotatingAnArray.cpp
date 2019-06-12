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
	    ll ans[n];
	    ll d;
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cin>>d;
	    for(ll i=0;i<n;i++){
	        ans[(i-d+n)%n]=a[i];
	    }
	    for(ll i=0;i<n;i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}