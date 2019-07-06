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
	    ll n,e;
	    cin>>n>>e;
	    vector<ll>adj1[n+5];
	    vector<ll>adj2[n+5];
	    ll a,b;
	    ll te=e;
	    while(te--){
	        cin>>a>>b;
	        adj1[a-1].push_back(b-1);
	    }
	    te=e;
	    while(te--){
	        cin>>a>>b;
	        adj2[a-1].push_back(b-1);
	    }
	    queue<ll>q1;
	    queue<ll>q2;
	    queue<ll>q1ans;
	    queue<ll>q2ans;
	    q1.push(0);
	    ll temp;
	    while(!q1.empty()){
	        temp=q1.front();
	        q1.pop();
	        q1ans.push(temp);
	        //cout<<temp<<" ";
	        for(auto it:adj1[temp]){
	            q1.push(it);
	        }
	    }
	    //cout<<"\n";
	    q2.push(0);
	    while(!q2.empty()){
	        temp=q2.front();
	        q2.pop();
	        q2ans.push(temp);
	        //cout<<temp<<" ";
	        reverse(adj2[temp].begin(),adj2[temp].end());
	        for(auto it:adj2[temp]){
	            q2.push(it);
	        }
	    }
	    //cout<<"\n";
	    cout<<(q1ans==q2ans)<<"\n";
	}
	return 0;
}