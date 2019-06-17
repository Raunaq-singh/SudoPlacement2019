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
	    ll ans=1;
	    pair<ll,ll> ansp=make_pair(0,1);
	    for(ll i=0;i<n;i++){
	        dp[i][i]=true;
	    }
	    for(ll i=0;i<n-1;i++){
	        if(a[i]==a[i+1]){
	            dp[i][i+1]=true;
	            if(ans==1){
	                ans=2;
	                ansp=make_pair(i,2);
	            }
	        }
	    }
	    for(ll gap=2;gap<n;gap++){
	        for(ll i=0;i+gap<n;i++){
	            if(a[i]==a[i+gap]){
	                if(dp[i+1][i+gap-1]){
	                    dp[i][i+gap]=true;
	                    if(ans<(gap+1)){
	                        ans=gap+1;
	                        ansp=make_pair(i,gap+1);
	                    }
	                }
	            }
	        }
	    }
	    
	    cout<<a.substr(ansp.first,ansp.second)<<"\n";
	}
	return 0;
}