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
	        cout<<"0\n";
	        continue;
	    }
	    vector<ll>bin;
	    while(n){
	        bin.push_back(n&1);
	        n=n>>1;
	    }
	    reverse(bin.begin(),bin.end());
	    ll dec=0;
	    dec=bin[0];
	    ll len=bin.size();
	    for(ll i=1;i<len;i++){
	        dec=dec*2 + bin[i-1]^bin[i];
	    }
	    cout<<dec<<"\n";
	}
	return 0;
}