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
	    map<string,ll>m;
	    string temp;
	    ll mx=-1;
	    for(ll i=0;i<n;i++){
	        cin>>temp;
	        m[temp]++;
	        mx=max(mx,m[temp]);
	    }
	    string ans;
	    for(auto it:m){
	        if(it.second==mx){
	            ans=it.first;
	            break;
	        }
	    }
	    cout<<ans<<" "<<mx<<"\n";
	}
	return 0;
}