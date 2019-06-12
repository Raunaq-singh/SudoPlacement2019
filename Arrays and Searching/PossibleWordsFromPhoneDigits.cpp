#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
map<ll,string>m;
void printW(ll a[], ll i, ll n, string s){
    if(i==n){
        cout<<s<<" ";
        return;
    }
    for(auto it:m[a[i]]){
        printW(a,i+1,n,s+it);
    }
}
int main(){
    m[2]="abc";
    m[3]="def";
    m[4]="ghi";
    m[5]="jkl";
    m[6]="mno";
    m[7]="pqrs";
    m[8]="tuv";
    m[9]="wxyz";
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    printW(a,0,n,"");
	    cout<<"\n";
	}
	return 0;
}