#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    bool isp[10001]={};
    isp[0]=true;
    isp[1]=true;
    for(ll i=2;i*i<=10000;i++){
        if(!isp[i]){
            for(ll j=i*i;j<=10000;j+=i){
                isp[j]=true;
            }
        }
    }
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll ans;
	    for(ll i=3;i<n;i++){
	        if(!isp[i] && !isp[n-i]){
	            ans=i;
	            break;
	        }
	    }
	    cout<<ans<<" "<<n-ans<<"\n";
	}
	return 0;
}