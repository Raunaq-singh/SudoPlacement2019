#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
bool removedup(char s[]){
    if(s[0]=='\0'){
        return false;
    }
    int size=0;
    while(s[size++]!='\0');
    /*
    //cout<<"SIZE "<<size<<"\n";
    for(int i=0;i<size;i++){
        cout<<s[i];
    }
    cout<<"\n";
    */
    int i=1;
    while(s[0]==s[i]){
        i++;
        if(i==size)
            break;
    }
    if(i==1){
        return (removedup(s+1)|false);    
    }else{
        for(int j=0;j<size-i;j++){
            s[j]=s[j+i];
        }
        return (removedup(s)|true);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    char s[51];
	    cin>>s;
	    while(removedup(s));
	    cout<<s<<"\n";
	}
	return 0;
}