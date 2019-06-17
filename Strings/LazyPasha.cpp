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
	    ll n,q;
	    cin>>n>>q;
	    string s;
	    cin>>s;
	    ll len=s.size();
	    ll res=0;
	    ll type,k;
	    while(q--){
	        cin>>type>>k;
	        if(type==1){
	            res=(res%len + k%len)%len;
	        }else{
	            cout<<s[(k-res+len)%len]<<"\n";
	        }
	    }
	}
	return 0;
}