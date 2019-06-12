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
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    ll sump[n+2]={};
	    ll suma[n+2]={};
	    for(ll i=0;i<n;i++){
	        sump[i+1]=sump[i]+a[i];
	        suma[n-i]=suma[n-i+1]+a[n-i-1];
	    }
	    ll ans=-1;
	    for(ll i=1;i<=n;i++){
	        if((sump[i]-a[i-1])==(suma[i]-a[i-1])){
	            ans=i;
	            break;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}