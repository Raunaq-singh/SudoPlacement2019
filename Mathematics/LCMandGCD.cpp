#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
ll gcd(ll a, ll b){
    if(b==0){
        return a;
    }
    if(a<b){
        return gcd(b,a);
    }else{
        return gcd(b,a%b);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    ll a,b;
	    cin>>a>>b;
	    ll g=gcd(a,b);
	    cout<<(a*b)/g<<" "<<g<<"\n";
	}
	return 0;
}