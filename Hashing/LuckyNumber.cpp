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
	    vector<ll>a;
	    while(n){
	        a.push_back(n%10);
	        n=n/10;
	    }
	    ll len=a.size();
	    set<ll> chk;
	    ll prod[len+1];
	    prod[0]=1;
	    for(ll i=0;i<len;i++){
	        prod[i+1]=prod[i]*a[i];
	    }
	    bool ans=true;
	    for(ll i=0;i<len;i++){
	        for(ll j=i;j<len;j++){
	            ll temp=prod[j+1]/prod[i];
	            if(chk.find(temp)!=chk.end()){
	                ans=false;
	                break;
	            }else{
	                chk.insert(temp);
	            }
	        }
	        if(ans==false){
	            break;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}