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
	    for(ll i=0;i<n/2;i++){
	        swap(a[i],a[n-i-1]);
	    }
	    for(ll i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}