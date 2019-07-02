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
	    ll x,y;
	    cin>>x>>y;
	    if(x==1){
	        cout<<"0\n";
	        continue;
	    }
	    while((y%x)==0){
	        y=y/x;
	    }
	    if(y==1){
	        cout<<"1\n";
	    }else{
	        cout<<"0\n";
	    }
	}
	return 0;
}