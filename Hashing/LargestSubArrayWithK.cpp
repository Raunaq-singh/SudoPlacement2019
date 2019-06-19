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
	    ll n,k;
	    cin>>n>>k;
	    ll a[n];
	    ll sum[n+1];
	    map<ll,ll>m;
	    m[0]=0;
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	        sum[i+1]=sum[i]+a[i];
	        m[sum[i+1]]=i+1;
	    }
	    ll ans=0;
	    for(ll i=0;i<=n;i++){
	        ans=max(ans,m[sum[i]+k]-i);
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}