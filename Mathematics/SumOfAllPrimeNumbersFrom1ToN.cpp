#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define MAX 1000000
using namespace std;
ll sum[MAX+1];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    bool isp[MAX+1]={};
    isp[0]=true;
    isp[1]=true;
    for(ll i=2;i*i<=MAX;i++){
        if(!isp[i])
        for(ll j=i*i;j<=MAX;j+=i){
            isp[j]=true;
        }
    }
    memset(sum,0,sizeof(sum));
    for(ll i=1;i<=MAX;i++){
        sum[i]=sum[i-1] + (!isp[i])*i;
    }
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    cout<<sum[n]<<"\n";
	}
	return 0;
}