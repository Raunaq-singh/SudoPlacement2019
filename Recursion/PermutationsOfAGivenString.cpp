#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
vector<string>ans;
void permute(string s, string o){
    if(s.size()==0){
        ans.push_back(o);
    }
    ll len=s.size();
    for(ll i=0;i<len;i++){
        permute(s.substr(0,i)+s.substr(i+1,len-i),o+s[i]);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    permute(s,"");
	    sort(ans.begin(),ans.end());
	    for(auto it:ans){
	        cout<<it<<" ";
	    }
	    ans.clear();
	    cout<<"\n";
	}
	return 0;
}