#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
void revD(ll n){
    if(!n){
        return;
    }
    cout<<n%10;
    revD(n/10);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    while((n%10)==0){
	        n=n/10;
	    }
	    revD(n);
	    cout<<"\n";
	}
	return 0;
}