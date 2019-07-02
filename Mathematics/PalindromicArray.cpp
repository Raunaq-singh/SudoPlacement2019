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
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    ll i=0;
	    ll j=n-1;
	    ll ans=0;
	    while(i<j){
	        //cout<<"AI "<<a[i]<<" AJ "<<a[j]<<"\n";
	        if(a[i]>a[j]){
	            a[j-1]+=a[j];
	            j--;
	            ans++;
	        }else if(a[i]<a[j]){
	            a[i+1]+=a[i];
	            i++;
	            ans++;
	        }else{
	            i++;
	            j--;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}