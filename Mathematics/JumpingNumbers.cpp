#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define MAX 1000000000
using namespace std;
set<ll>jumping;
void calJump(ll pre, ll num){
    if(num>MAX){
        return;
    }
    if(pre<0 || pre>9){
        return;
    }
    jumping.insert(num);
    calJump(pre+1,num*10+pre+1);
    calJump(pre-1,num*10+pre-1);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    for(ll i=0;i<=9;i++){
        calJump(i,0);
    }
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    for(auto it:jumping){
	        if(it>n){
	            break;
	        }else{
	            cout<<it<<" ";
	        }
	    }    
	    cout<<"\n";
	}
	return 0;
}