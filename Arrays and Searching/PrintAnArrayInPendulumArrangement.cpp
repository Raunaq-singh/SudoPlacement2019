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
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    ll ans[n];
	    ll mn=(n-1)/2;
	    ll mx=mn+1;
	    ll mno=0;
	    while(mn>=0){
	        ans[mn--]=a[mno++];
	        ans[mx++]=a[mno++];
	    }
	    for(ll i=0;i<n;i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}