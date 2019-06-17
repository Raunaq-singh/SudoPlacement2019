#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
void print(ll n, ll chk, ll N){
    if(n==N && chk==1){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    if(n<=0){
        print(n+5,1,N);
    }else if(chk==1){
        print(n+chk*5,1,N);
    }else{
        print(n+chk*5,-1,N);
    }
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
	    print(n,-1,n);
	    cout<<"\n";
	}
	return 0;
}