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
	    char temp;
	    ll ans=0;
	    for(ll i=0;i<n;i++){
	        cin>>temp;
	        if(temp=='1'){
	            ans++;
	        }
	    }
	    cout<<(ans*(ans-1))/2<<"\n";
	}
	return 0;
}