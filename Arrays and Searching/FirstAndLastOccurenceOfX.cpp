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
	    ll x;
	    cin>>x;
	    ll fi=INT_MAX;
	    ll si=-1;
	    for(ll i=0;i<n;i++){
	        if(x==a[i]){
	            fi=min(fi,i);
	            si=max(si,i);
	        }
	    }
	    if(fi==INT_MAX){
	        cout<<"-1\n";
	    }else{
	        cout<<fi<<" "<<si<<"\n";    
	    }
	}
	return 0;
}