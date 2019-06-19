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
	    if(s.size()>26){
	        cout<<"0\n";
	        continue;
	    }
	    int freq[26]={};
	    for(auto it:s){
	        freq[it-'a']++;
	    }
	    bool ans=true;
	    for(int i=0;i<26;i++){
	        if(freq[i]>1){
	            ans=false;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}