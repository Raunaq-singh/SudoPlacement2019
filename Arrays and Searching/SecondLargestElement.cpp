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
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    if(n==1){
	        cout<<"-1\n";
	    }else{
	        cout<<a[n-2]<<"\n";    
	    }
	}
	return 0;
}