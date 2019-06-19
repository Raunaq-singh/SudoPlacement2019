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
	    ll n,d;
	    cin>>n>>d;
	    if((n%d)==0){
	        cout<<(n/d)<<"\n";
	        continue;
	    }
	    cout<<n/d<<".";
	    set<ll>rems;
	    ll rem=n%d;
	    string ans="";
	    ll q;
	    map<ll,ll>m;
	    int i=0;
	    while(rem!=0){
	        rem=rem*10;
	        q=rem/d;
	        if(rems.find(rem)!=rems.end()){
	            break;
	        }else{
	            rems.insert(rem);
	            i++;
	            m[rem]=i;
	            ans+=(q+'0');
	        }
	        rem=rem%d;
	    }
	    if(rem==0){
	        cout<<ans<<"\n";
	    }else{
	        ll len=ans.size();
	        m[rem]--;
	        for(ll i=0;i<m[rem];i++){
	            cout<<ans[i];
	        }
	        cout<<"("<<ans.substr(m[rem])<<")\n";
	    }
	}
	return 0;
}