#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
ll mod(ll x, ll y, ll m){
    if(y==0){
        return 1;
    }else if(y&1){
        return (x%m*mod((x*x)%m, y/2, m)%m)%m;
    }else{
        return mod((x*x)%m,y/2,m)%m;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    ll x,y,m;
	    cin>>x>>y>>m;
	    cout<<mod(x,y,m)%m<<"\n";
	}
	return 0;
}