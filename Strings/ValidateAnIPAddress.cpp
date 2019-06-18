#include <bits/stdc++.h>
using namespace std;
int isValid(char *);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		char s[10000];
		cin>>s;
		cout<<isValid(s)<<endl;
	}
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/* The function returns 1 if 
IP string is valid else return 0 
You are required to complete this method */
int isValid(char *ip){
      //your code here
      int i=0;
      vector<string>v;
      string temp;
      while(ip[i]!='\0'){
          //cout<<ip[i]<<"\n";
          if(ip[i]=='.'){
              v.push_back(temp);
              temp="";
          }else if(ip[i]<'0' || ip[i]>'9'){
              return 0;
          }else{
              temp.push_back(ip[i]);
          }
          i++;
      }
      v.push_back(temp);
      if(v.size()!=4){
          return 0;
      }
      int chk;
      bool ans=true;
      for(auto it:v){
          if(it.size()==0){
              ans=false;
              break;
          }
          chk=stoi(it);
          //cout<<"CHK "<<chk<<"\n";
          if(chk<0 || chk>255){
              ans=false;
              break;
          }
          if(it[0]=='0' && it.size()>1){
              ans=false;
              break;
          }
      }
      return ans;
}