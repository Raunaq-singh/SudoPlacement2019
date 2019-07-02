#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
bool check(string s){
    ll ret=0;
    ll temp;
    for(auto it:s){
        temp=it-'0';
        ret=ret*10+temp;
    }
    if((ret%8)==0){
        return true;
    }else{
        return false;
    }
}
bool permute(string s, string o){
    if(s.size()==0){
        return check(o);
    }
    ll ret=false;
    ll len=s.size();
    for(ll i=0;i<len;i++){
        ret=ret||permute(s.substr(0,i)+s.substr(i+1,len-i),o+s[i]);
    }
    return ret;
}
bool isDivisible(ll n){
    string s="";
    while(n){
        s+=(n%10);
        n=n/10;
    }
    return permute(s,"");
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
	    bool ans=isDivisible(n);
	    if(ans){
	        cout<<"Yes\n";
	    }else{
	        cout<<"No\n";
	    }
	}
	return 0;
}