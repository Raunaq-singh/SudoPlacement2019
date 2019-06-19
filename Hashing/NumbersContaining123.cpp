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
	/*
	unordered_set<ll>s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	*/
	while(t--){
	    ll n;
	    cin>>n;
	    ll a[n];
	    bool ans=false;
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(ll i=0;i<n;i++){
	        ll temp=a[i];
	        while(temp){
	            if((temp%10)>3 || (temp%10)==0){
	                break;
	            }
	            temp=temp/10;
	        }
	        if(temp==0){
	            ans=true;
	            //anss.insert(a[i]);
	            cout<<a[i]<<" ";
	        }
	    }
	    if(!ans){
	        cout<<"-1";
	    }
	    /*
	    for(auto it:anss){
	        cout<<it<<" ";
	    }
	    */
	    cout<<"\n";
	}
	return 0;
}