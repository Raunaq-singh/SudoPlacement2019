#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
ll setBits(ll n){
    ll ret=0;
    while(n){
        ret+=(n&1);
        n=n>>1;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    bool isBleak[10001]={};
    for(ll i=1;i<=10000;i++){
        ll temp=i+setBits(i);
        if(temp<10001){
            isBleak[temp]=true;    
        }
    }
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    cout<<(!isBleak[n])<<"\n";
	}
	return 0;
}