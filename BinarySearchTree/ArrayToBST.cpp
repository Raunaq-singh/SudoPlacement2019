#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
void preOrder(ll s, ll e, ll a[]){
    if(s>e){
        return;
    }
    if(s==e){
        cout<<a[s]<<" ";
        return;
    }
    ll mid=(s+e)/2;
    cout<<a[mid]<<" ";
    preOrder(s,mid-1,a);
    preOrder(mid+1,e,a);
}
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
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    preOrder(0,n-1,a);
	    cout<<"\n";
	}
	return 0;
}