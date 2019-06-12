#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(ll i=0;i<=(n/k);i++){
	        ll st=k*i;
	        ll end=min(k*(i+1),n);
	        for(ll j=0;j<(end-st)/2;j++){
	            swap(a[j+st],a[end-j-1]);
	        }
	    }
	    for(ll i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}