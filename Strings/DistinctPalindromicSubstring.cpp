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
	    string a;
	    cin>>a;
	    ll n=a.size();
	    bool dp[n][n]={};
	    set<string>ans;
	    for(ll i=0;i<n;i++){
	        dp[i][i]=true;
	        ans.insert(a.substr(i,1));
	    }
	    for(ll i=0;i<n-1;i++){
	        if(a[i]==a[i+1]){
	            dp[i][i+1]=true;
	            ans.insert(a.substr(i,2));
	        }
	    }
	    for(ll gap=2;gap<n;gap++){
	        for(ll i=0;i+gap<n;i++){
	            if(a[i]==a[i+gap]){
	                if(dp[i+1][i+gap-1]){
	                    dp[i][i+gap]=true;
	                    ans.insert(a.substr(i,gap+1));
	                }
	            }
	        }
	    }
	    /*
	    for(auto it:ans){
	        cout<<it<<"\n";
	    }
	    */
	    cout<<ans.size()<<"\n";
	}
	return 0;
}