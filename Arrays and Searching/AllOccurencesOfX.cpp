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
	    ll n,x;
	    cin>>n>>x;
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    ll up=upper_bound(a,a+n,x)-a;
	    ll lo=lower_bound(a,a+n,x)-a;
	    if(up==lo){
	        cout<<"-1\n";
	    }else{
	        cout<<(up-lo)<<"\n";
	    }
	}
	return 0;
}