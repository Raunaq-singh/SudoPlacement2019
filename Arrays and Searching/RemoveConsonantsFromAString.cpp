#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    set<char>s;
	s.insert('a');
	s.insert('e');
	s.insert('i');
	s.insert('o');
	s.insert('u');
	s.insert(' ');
	ll t;
	cin>>t;
	cin.ignore();
	while(t--){
	    string st;
	    getline(cin,st);
	    string ans={};
	    for(auto it:st){
	        char t=tolower(it);
	        if(s.find(t)!=s.end()){
	            ans+=it;
	        }
	    }
	    if(ans.size()){
	        cout<<ans<<"\n";
	    }else{
	        cout<<"No Vowel\n";
	    }
	}
	return 0;
}