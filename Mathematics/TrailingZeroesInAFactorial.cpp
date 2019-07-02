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
	    ll ans=0;
	    while(n){
	        ans+=(n/5);
	        n=n/5;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}