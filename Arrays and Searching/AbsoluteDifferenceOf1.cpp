#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
bool checkDigits(ll a){
    ll pre=a%10;
    ll temp;
    a=a/10;
    bool ret=false;
    while(a){
        ret=true;
        temp=a%10;
        if(abs(temp-pre)!=1){
            return false;
        }
        pre=temp;
        a=a/10;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    vector<ll>ans;
	    for(ll i=0;i<n;i++){
	        if(a[i]<k){
	            if(checkDigits(a[i])){
	                ans.push_back(a[i]);
	            }
	        }
	    }
	    if(ans.size()){
	        for(auto it:ans){
	            cout<<it<<" ";
	        }
	    }else{
	        cout<<"-1";
	    }
	    cout<<"\n";
	}
	return 0;
}