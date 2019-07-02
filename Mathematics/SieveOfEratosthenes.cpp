#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    bool sieve[10001]={};
    for(ll i=2;i*i<=10000;i++){
        if(!sieve[i]){
            for(ll j=i*i;j<=10000;j+=i){
                sieve[j]=true;
            }
        }
    }
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    for(ll i=2;i<=n;i++){
	        if(!sieve[i]){
	            cout<<i<<" ";
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}