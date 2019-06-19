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
	    ll temp;
	    multiset<ll>a;
	    multiset<ll>b;
	    for(ll i=0;i<n;i++){
	        cin>>temp;
	        a.insert(temp);
	    }
	    for(ll i=0;i<n;i++){
	        cin>>temp;
	        b.insert(temp);
	    }
	    cout<<(a==b)<<"\n";
	}
	return 0;
}