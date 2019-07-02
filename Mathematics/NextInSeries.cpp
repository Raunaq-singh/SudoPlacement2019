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
	    ld a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    if(n==2){
	        cout<<a[1]+(a[1]-a[0])<<"\n";
	        continue;
	    }
	    bool ap=true,gp=true,fb=true;
	    //Check for AP
	    ld d=a[1]-a[0];
	    for(ll i=2;i<n;i++){
	        if((a[i]-a[i-1])!=d){
	            ap=false;
	            break;
	        }
	    }
        //Check for GP
	    ld r = a[1]/a[0];
	    for(ll i=2;i<n;i++){
	        if((a[i]/a[i-1])!=r){
	            gp=false;
	            break;
	        }
	    }
        //Check for Fibonacci
	    ld s=a[0]+a[1];
	    for(ll i=2;i<n;i++){
	        if(s!=a[i]){
	            fb=false;
	            break;
	        }else{
	            s+=a[i];
	            s-=a[i-2];
	        }
	    }
	    if(ap){
	        cout<<ll(a[n-1]+d)<<"\n";
	    }else if(gp){
	        cout<<ll(a[n-1]*r)<<"\n";
	    }else if(fb){
	        cout<<ll(s)<<"\n";
	    }else{
	        cout<<"-99999\n";
	    }
	}
	return 0;
}