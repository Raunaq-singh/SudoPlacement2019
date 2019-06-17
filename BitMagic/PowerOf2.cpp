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
	    ll ans=-1;
	    ll i=0;
	    while(n){
	        if(n&1){
	            if(ans==-1){
	                ans=i;
	            }else{
	                ans=-1;
	                break;
	            }
	        }
	        i++;
	        n=n>>1;
	    }
	    if(ans==-1){
	        cout<<"NO\n";
	    }else{
	        cout<<"YES\n";
	    }
	}
	return 0;
}