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
	    map<ll,set<ll>>m;
	    queue<pair<ll,ll>>q;
	    q.push(make_pair(0,0));
	    pair<ll,ll>temp;
	    while(!q.empty()){
	        temp=q.front();
	        q.pop();
	        if(temp.first>=n){
	            continue;
	        }
	        m[temp.second].insert(a[temp.first]);
	        q.push(make_pair(2*temp.first+1,temp.second+1));
	        q.push(make_pair(2*temp.first+2,temp.second+1));
	    }
	    for(auto it:m){
	        for(auto it2:it.second){
	            cout<<it2<<" ";
	        }
	        cout<<"\n";
	    }
	}
	return 0;
}