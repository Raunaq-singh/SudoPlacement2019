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
	    string s1;
	    string s2;
	    cin>>s1>>s2;
	    map<char,ll>m;
	    ll i=0;
	    for(auto it:s1){
	        if(m.find(it)==m.end()){
	            m[it]=i;    
	        }
	        i++;
	    }
	    ll mnind=INT_MAX;
	    for(auto it:s2){
	        if(m.find(it)!=m.end()){
	            if(mnind>m[it]){
	                mnind=m[it];
	            }
	        }
	    }
	    if(mnind==INT_MAX){
	        cout<<"$\n";
	    }else{
	        cout<<s1[mnind]<<"\n";
	    }
	}
	return 0;
}