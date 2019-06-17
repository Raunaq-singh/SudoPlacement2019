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
	    ll n,l,r;
	    cin>>n>>l>>r;
	    ll temp=r-l+1;
	    ll com=1<<(temp);
	    com--;
	    //cout<<"COM "<<com<<"\n";
	    com=com<<(l-1);
	    cout<<(n^com)<<"\n";
	}
	return 0;
}