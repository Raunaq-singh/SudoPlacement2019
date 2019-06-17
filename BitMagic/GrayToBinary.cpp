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
	    vector<ll>gray;
	    while(n){
	        gray.push_back(n&1);
	        n=n>>1;
	    }
	    reverse(gray.begin(),gray.end());
	    ll dec=gray[0];
	    ll len=gray.size();
	    for(ll i=1;i<len;i++){
	        dec = 2*dec + (gray[i]==0)*(gray[i-1]) + (gray[i]==1)*(gray[i-1]^1);
	        gray[i] = (gray[i]==0)*(gray[i-1]) + (gray[i]==1)*(gray[i-1]^1);
	    }
	    cout<<dec<<"\n";
	}
	return 0;
}