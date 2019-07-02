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
	    ll m,n;
	    cin>>m>>n;
	    ll ans=0;
	    while(m && n){
	        ans+=(m*n);
	        m--;
	        n--;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}