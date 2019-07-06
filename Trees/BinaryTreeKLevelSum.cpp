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
	    ll k;
	    cin>>k;
	    string s;
	    cin>>s;
	    stack<char>st;
	    ll ans=0;
	    ll n=s.size();
	    for(ll i=0;i<n;i++){
	        if(s[i]=='('){
	            st.push('(');
	        }else if(s[i]==')'){
	            st.pop();
	        }else{
	            ll temp=0;
	            while(s[i]!=')' && s[i]!='('){
	                temp=temp*10+(s[i]-'0');
	                i++;
	            }
	            i--;
	            if(st.size()==(k+1)){
	                //cout<<"TEMP "<<temp<<"\n";
	                ans+=temp;
	            }
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}