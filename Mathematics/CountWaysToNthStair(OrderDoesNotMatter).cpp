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
	    if(n&1){
	        cout<<((n-1)/2+1)<<"\n";
	    }else{
	        cout<<((n/2)+1)<<"\n";
	    }
	}
	return 0;
}