#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define MAX 100001
using namespace std;
ll getSen(ll i, ll precomp[], ll sen[]){
    if(sen[i]==0){
        return 0;
    }
    if(precomp[i]!=-1){
        return precomp[i];
    }
    return precomp[i]=getSen(sen[i]-1, precomp, sen)+1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    bool sieve[MAX+1];
    memset(sieve,false,sizeof(sieve));
    for(ll i=2;i*i<=MAX;i++){
        if(!sieve[i]){
            for(ll j=i*i;j<=MAX;j+=i){
                sieve[j]=true;
            }
        }
    }
    sieve[0]=true;
    sieve[1]=true;
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll sen[n];
	    for(ll i=0;i<n;i++){
	        cin>>sen[i];
	    }
	    ll precomp[n+1];
	    memset(precomp,-1,sizeof(precomp));
	    ll ans=0;
	    ll chk=0;
	    ll temp;
	    for(ll i=0;i<n;i++){
	        if(sen[i]==0){
	            continue;
	        }
	        chk=getSen(i, precomp, sen);
	        chk+=(i+1);
	        if(!sieve[chk]){
	            ans++;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}