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
	    ll a[m];
	    ll b[n];
	    set<ll>s;
	    for(ll i=0;i<m;i++){
	        cin>>a[i];
	        s.insert(a[i]);
	    }
	    bool ans=true;
	    for(ll i=0;i<n;i++){
	        cin>>b[i];
	        if(s.find(b[i])==s.end()){
	            ans=false;
	        }
	    }
	    if(ans){
	        cout<<"Yes\n";
	    }else{
	        cout<<"No\n";
	    }
	}
	return 0;
}