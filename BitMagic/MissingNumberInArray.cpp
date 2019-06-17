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
	    n--;
	    bitset<10000001>bits(0);
	    ll temp;
	    for(ll i=0;i<n;i++){
	        cin>>temp;
	        //cout<<(1<<temp)<<"\n";
	        bits[temp]=1;
	    }
	    n++;
	    for(ll i=1;i<=n;i++){
	        if(bits[i]==0){
	            cout<<i<<"\n";
	            break;
	        }
	    }
	}
	return 0;
}