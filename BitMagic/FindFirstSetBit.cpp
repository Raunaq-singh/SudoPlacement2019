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
	    if(n==0){
	        cout<<0<<"\n";
	        continue;
	    }
	    ll i=1;
	    while(n){
	        if(n&1){
	            break;
	        }else{
	            n=n>>1;
	        }
	        i++;
	    }
	    cout<<i<<"\n";
	}
	return 0;
}