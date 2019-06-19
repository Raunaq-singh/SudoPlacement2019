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
	    ll sum[n+1]={};
	    map<ll,ll>m;
	    m[0]++;
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	        sum[i+1]=sum[i]+a[i];
	        m[sum[i+1]]++;
	    }
	    ll ans=0;
	    for(auto it:m){
	        ans+=(it.second*(it.second-1))/2;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}