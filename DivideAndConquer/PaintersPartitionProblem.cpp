#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
ll painters(ll mid, ll a[], ll n){
    ll ret=1;
    ll tempsum=0;
    for(ll i=0;i<n;i++){
        tempsum+=a[i];
        //cout<<"TEMPSUM "<<tempsum<<"\n";
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
	    ll k,n;
	    cin>>k>>n;
	    ll a[n];
	    ll sum=0;
	    ll mx=-1;
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	        sum+=a[i];
	        mx=max(mx,a[i]);
	    }
	    if(k>n){
	        cout<<mx<<"\n";
	        continue;
	    }
	    ll high=sum;
	    ll low=mx;
	    ll mid;
	    ll ans=INT_MAX;
	    while(low<=high){
	        mid=(high+low)/2;
	        ll temp=painters(mid,a,n);
	        //cout<<mid<<" "<<temp<<"\n";
	        if(temp<k){
	            ans=min(ans,mid);
	            high=mid-1;
	        }else if(temp>k){
	            low=mid+1;
	        }else{
	            ans=min(ans,mid);
	            high=mid-1;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}