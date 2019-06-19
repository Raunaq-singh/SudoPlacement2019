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
	    map<string,ll>m;
	    string temp;
	    for(ll i=0;i<n;i++){
	        cin>>temp;
	        sort(temp.begin(),temp.end());
	        m[temp]++;
	    }
	    priority_queue<ll,vector<ll>,greater<ll>>pq;
	    for(auto it:m){
	        pq.push(it.second);
	    }
	    while(!pq.empty()){
	        cout<<pq.top()<<" ";
	        pq.pop();
	    }
	    cout<<"\n";
	}
	return 0;
}