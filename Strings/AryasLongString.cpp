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
	    string s;
	    cin>>s;
	    ll k,n;
	    char c;
	    cin>>k>>n>>c;
	    ll len=s.size();
	    ll q=n/len;
	    ll r=n%len;
	    ll ans=0;
	    for(auto it:s){
	        if(it==c){
	            ans++;
	        }
	    }
	    ans=ans*q;
	    for(ll i=0;i<r;i++){
	        if(s[i]==c){
	            ans++;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}