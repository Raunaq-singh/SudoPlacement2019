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
	    ll ans[n];
	    memset(ans,-1,sizeof(ans));
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(ll i=1;i<n;i++){
	        if(a[i]<a[i-1]){
	            ans[i-1]=a[i];
	        }
	    }
	    for(ll i=0;i<n;i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}