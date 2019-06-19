#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
ll chk(ll mid, ll a[], ll n){
    ll ret=1;
    ll tempsum=0;
    for(ll i=0;i<n;i++){
        tempsum+=a[i];
        if(tempsum>mid){
            tempsum=a[i];
            ret++;
        }
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
	    ll n;
	    cin>>n;
	    ll a[n];
	    ll sum=0;
	    ll mx=-1;
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	        sum+=a[i];
	        mx=max(mx,a[i]);
	    }
	    ll m;
	    cin>>m;
	    if(m>n){
	        cout<<"-1\n";
	        continue;
	    }
	    ll high=sum;
	    ll low=mx;
	    ll ans=INT_MAX;
	    ll mid;
	    while(low<=high){
	        mid=(high+low)/2;
	        if(chk(mid,a,n)<=m){
	            ans=min(ans,mid);
	            high=mid-1;
	        }else{
	            low=mid+1;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}