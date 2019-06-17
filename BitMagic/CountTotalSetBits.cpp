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
	    n++;
	    ll i=1;
	    ll temp=2;
	    ll tempn;
	    ll ans=0;
	    while(temp<=n){
	        ans+= ((n/temp)*(temp/2));
	        tempn=n%temp;
	        if(tempn/(temp/2)){
	            ans+=(tempn%(temp/2));
	        }
	        temp=temp<<1;
	    }
	    tempn=n%temp;
	    if(tempn/(temp/2)){
	       ans+=(tempn%(temp/2));
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}