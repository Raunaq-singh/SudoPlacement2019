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
	    string s;
	    cin>>s;
	    ll ans=0;
	    for(auto it:s){
	        ans=ans*2 + (it-'0');
	        ans=ans%3;
	    }
	    ans=ans%3;
	    if(!ans){
	        cout<<"1\n";
	    }else{
	        cout<<"0\n";
	    }
	}
	return 0;
}