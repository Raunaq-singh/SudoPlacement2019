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
	    ll m,n;
	    cin>>m>>n;
	    for(ll i=m;i<=n;i++){
	        ll chk=0;
	        ll temp=i;
	        ll digit;
	        while(temp){
	            digit=temp%10;
	            if(chk&(1<<digit)){
	                break;
	            }else{
	                chk=(chk|(1<<digit));
	            }
	            temp=temp/10;
	        }
	        if(temp==0){
	            cout<<i<<" ";
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}