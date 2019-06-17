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
	    string a,b;
	    cin>>a>>b;
	    ll n=a.size();
	    ll m=b.size();
	    ll dp[n+1][m+1];
	    memset(dp,0,sizeof(dp));
	    for(ll i=1;i<=n;i++){
	        for(ll j=1;j<=m;j++){
	            if(a[i-1]==b[j-1]){
	                dp[i][j]=1+dp[i-1][j-1];
	            }else{
	                dp[i][j]=0;
	            }
	        }
	    }
	    ll ans=-1;
	    ll ansend=-1;
	    for(ll j=1;j<=m;j++){
	        if(dp[1][j]>0){
	            //cout<<"J "<<j<<"\n";
	            ll k=j;
	            ll i=1;
	            while(i<=n && k<=m){
	                if(dp[i][k]==0){
	                    break;
	                }
	                i++;
	                k++;
	            }
	            if(ans<(i-1)){
	                ans=i-1;
	                ansend=j-1;
	            }
	        }
	    }
	    if(ans==-1){
	        cout<<"-1\n";
	    }else{
	        cout<<ansend<<" "<<a.substr(0,ans)<<"\n";    
	    }
	}
	return 0;
}