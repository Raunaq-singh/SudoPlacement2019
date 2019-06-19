#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
ll chk(ll freq[]){
    ll ret=0;
    for(ll i=0;i<26;i++){
        if(freq[i]>0){
            ret++;
        }
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    ll k;
	    cin>>k;
	    ll freq[26]={};
	    ll len=s.size();
	    ll ans=0;
	    ll i=0,j=0;
	    while(i<len && j<len){
	        while(chk(freq)<=k && j<len){
	            freq[s[j++]-'a']++;
	        }
	        //cout<<"J "<<j<<" I "<<i<<"\n";
	        ans=max(ans,j-i-1);
	        while(chk(freq)>k && i<=j){
	            freq[s[i++]-'a']--;
	        }
	        ans=max(ans,j-i);
	    }
	    memset(freq,0,sizeof(freq));
	    for(auto it:s){
	        freq[it-'a']++;
	    }
	    if(chk(freq)<k){
	        cout<<"-1\n";
	        continue;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}