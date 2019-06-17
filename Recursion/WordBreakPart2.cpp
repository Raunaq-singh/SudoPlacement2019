#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
ll freq[26];
void possWords(multiset<string> dict, string s, string out){
    //cout<<"STRING "<<s<<"\n";
    bool found=false;
    ll len=s.size();
    for(ll i=0;i<len;i++){
        string temp=s.substr(0,i+1);
        if(dict.find(temp)!=dict.end()){
            found=true;
            string next=s.substr(i+1,len-i-1);
            possWords(dict,next,out+temp+" ");
        }
    }
    if(found==false){
        bool ans=false;
        ll freqo[26]={};
        for(auto it:out){
            freqo[it-'a']++;
        }
        for(ll i=0;i<26;i++){
            if(freq[i]!=freqo[i]){
                return;
            }
        }
        ll leno=out.size();
        out[leno-1]=')';
        cout<<"("<<out;
        return;
    }
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
	    multiset<string>dict; 
	    string temp;
	    for(ll i=0;i<n;i++){
	        cin>>temp;
	        dict.insert(temp);
	    }
	    string s;
	    cin>>s;
	    memset(freq,0,sizeof(freq));
	    for(auto it:s){
	        freq[it-'a']++;
	    }
	  	string out="";
        possWords(dict,s,out);
        cout<<"\n";
	}
	return 0;
}