#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
bool chk(ll freqc[], ll freqg[]){
    for(ll i=0;i<26;i++){
        if(freqc[i]==0 && freqg[i]!=0){
            return false;
        }
    }
    return true;
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
	    ll freq[26]={};
	    for(auto it:s){
	        freq[it-'a']++;
	    }
	    ll len=s.size();
	    ll i=0,j=0;
	    ll freqc[26]={};
	    ll ans=INT_MAX;
	    while(i<len && j<len){
	        //cout<<"I "<<i<<" J "<<j<<"\n";
	        while(!chk(freqc,freq) && j<len){
	            freqc[s[j++]-'a']++;
	        }
	        ans=min(ans,j-i);
	        while(chk(freqc,freq) && i<len){
	            freqc[s[i++]-'a']--;
	        }
	        ans=min(ans,j-i+1);
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}