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
	    set<ll>s;
	    ll temp;
	    for(ll i=0;i<n;i++){
	        cin>>temp;
	        s.insert(temp);
	    }
	    ll pre=*s.begin();
	    bool ans=true;
	    for(auto it:s){
	        if(pre==it){
	            continue;
	        }
	        if(it!=(pre+1)){
	            ans=false;
	            break;
	        }else{
	            pre=it;
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