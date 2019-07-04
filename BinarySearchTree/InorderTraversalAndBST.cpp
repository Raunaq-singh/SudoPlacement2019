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
	    bool ans=true;
	    ll mx=-1;
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]<=mx){
	            ans=false;
	        }else{
	            mx=a[i];
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}