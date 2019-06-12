#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    ll i=lower_bound(a,a+n,k)-a;
	    ll mxD=a[i]-k;
	    if(i>0&&mxD>(abs(a[i-1]-k))){
	        cout<<a[i-1]<<"\n";
	    }else{
	        cout<<a[i]<<"\n";
	    }
	}
	return 0;
}