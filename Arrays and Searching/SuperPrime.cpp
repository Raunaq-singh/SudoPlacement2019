#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
#define MAX 10000000
bool isPrime[MAX+1]={};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    for(ll i=2;i*i<=MAX;i++){
        if(!isPrime[i])
        for(ll j=i*i;j<=MAX;j+=i){
            isPrime[j]=true;
        }
    }
    vector<ll>dp;
    for(ll i=5;i<=MAX;i++){
        if(!isPrime[i]&&!isPrime[i-2]){
            dp.push_back(i);
        }
    }
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    cout<<upper_bound(dp.begin(),dp.end(),n)-dp.begin()<<"\n";
	}
	return 0;
}