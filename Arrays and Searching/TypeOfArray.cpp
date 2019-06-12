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
	    ll a[n];
	    ll mx=-1;
	    ll mn=INT_MAX;
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	        mx=max(a[i],mx);
	        mn=min(a[i],mn);
	    }
	    if(mx==a[n-1] && mn==a[0]){
	        cout<<mx<<" 1\n";
	    }else if(mx==a[0] && mn==a[n-1]){
	        cout<<mx<<" 2\n";
	    }else if(a[n-1]>a[0]){
	        cout<<mx<<" 3\n";
	    }else{
	        cout<<mx<<" 4\n";
	    }
	}
	return 0;
}