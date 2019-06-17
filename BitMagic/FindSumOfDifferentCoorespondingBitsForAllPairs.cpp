#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define mod 1000000007
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
	    ll mxbits=30;
	    ll ans=0,x=0;
	    for(ll i=0;i<=mxbits;i++){
	        x=0;
	        for(ll j=0;j<n;j++){
	            if(a[j]&(1<<i)){
	                x++;
	            }
	        }
	        //cout<<"X "<<x<<"\n";
	        ans=ans%mod+(x%mod*(n-x)%mod)%mod;
	        ans=ans%mod;
	    }
	    cout<<(2*ans)%mod<<"\n";
	}
	return 0;
}