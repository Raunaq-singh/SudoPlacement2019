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
	    vector<ll>ans;
	    ll i=14;
	    ll temp;
	    while(i--){
	        temp=n&1;
	        ans.push_back(temp);
	        n=n>>1;
	    }
	    reverse(ans.begin(),ans.end());
	    for(auto it:ans){
	        cout<<it;
	    }
	    cout<<"\n";
	}
	return 0;
}