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
	    map<ll,bool>present;
	    map<ll,ll>value;
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	        present[a[i]]=true;
	        value[a[i]]=1;
	    }
	    sort(a,a+n);
	    for(ll i=0;i<n;i++){
	        for(ll j=1;(j*j)<=a[i];j++){
	            if(j==1){
	                continue;
	            }
	            if(!(a[i]%j)){
	                if(present[j] && present[a[i]/j]){
	                    value[a[i]]+=2*(value[j]*value[a[i]/j]);
	                    if(j==(a[i]/j)){
	                        value[a[i]]-=(value[j]*value[a[i]/j]);
	                    }
	                }
	            }
	        }
	    }
	    ll ans=0;
	    for(auto it:value){
	        ans+=it.second;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}