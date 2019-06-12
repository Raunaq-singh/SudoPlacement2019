#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll a[n];
	    ll mx=-1;
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    stack<ll>ans;
	    for(ll i=n-1;i>=0;i--){
	        if(a[i]>=mx){
	            //cout<<a[i]<<" ";
	            ans.push(a[i]);
	            mx=a[i];
	        }
	    }
	    while(!ans.empty()){
	        cout<<ans.top()<<" ";
	        ans.pop();
	    }
	    cout<<"\n";
	}
	return 0;
}