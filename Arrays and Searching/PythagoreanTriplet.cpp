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
	    ll n;
	    cin>>n;
	    ll a[n];
	    //map<ll,ll> m;
	    bool vis[1001]={};
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	        vis[a[i]]=true;
	        //a[i]=a[i]*a[i];
	        //m[a[i]]++;
	    }
	    bool ans=false;
	    for(ll i=1;i<=1000;i++){
	        if(vis[i]){
	            for(ll j=i+1;j<=1000;j++){
	                if(!vis[j]){
	                    continue;
	                }
	                ld temp=sqrt(i*i+j*j);
	                //cout<<"TEMP "<<temp<<"\n";
	                ll temp2=0;
	                if((temp-ll(temp))!=0){
	                    continue;
	                }else{
	                    temp2=temp;
	                }
	                if(vis[temp2]){
	                    //cout<<"I "<<i<<" J "<<j<<"\n";
	                    ans=true;
	                }
	            }
	        }
	        if(ans){
	            break;
	        }
	    }
	    if(ans){
	        cout<<"Yes\n";
	    }else{
	        cout<<"No\n";
	    }
	}
	return 0;
}