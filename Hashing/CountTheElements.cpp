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
	    ll b[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(ll i=0;i<n;i++){
	        cin>>b[i];
	    }
	    sort(b,b+n);
	    ll q;
	    cin>>q;
	    ll temp;
	    while(q--){
	        cin>>temp;
	        cout<<(upper_bound(b,b+n,a[temp])-b)<<"\n";
	    }
	}
	return 0;
}