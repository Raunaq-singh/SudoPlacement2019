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
	    multiset<ll>even;
	    multiset<ll,greater<ll>>odd;
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]&1){
	            odd.insert(a[i]);
	        }else{
	            even.insert(a[i]);
	        }
	    }
	    for(auto it:odd){
	        cout<<it<<" ";
	    }
	    for(auto it:even){
	        cout<<it<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}