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
	    ll ans=0;
	    ll n;
	    cin>>n;
	    ll i=0;
	    while(i<32){
	        ans=ans*2+(n&1);
	        n=n>>1;
	        i++;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}