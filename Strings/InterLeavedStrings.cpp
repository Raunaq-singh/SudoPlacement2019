#include <bits/stdc++.h>
using namespace std;
bool isInterleave(string A, string B, string C);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		cout<<isInterleave(a,b,c)<<endl;
	}
	// your code goes here
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete this method */
int dp[101][101][101];
bool isAns(string a, string b, string c, int i, int j, int k){
    //cout<<"I J K "<<i<<" "<<j<<" "<<k<<"\n";
    if(i==0 && j==0){
        return true;
    }else if(k==0){
        return false;
    }
    if(dp[i][j][k]!=-1){
        return dp[i][j][k];
    }
    if(i>0 && a[i-1]==c[k-1]){
        if(j>0 && a[i-1]==b[j-1]){
            return dp[i][j][k]=(isAns(a,b,c,i-1,j,k-1)||isAns(a,b,c,i,j-1,k-1));
        }else{
            return dp[i][j][k]=isAns(a,b,c,i-1,j,k-1);
        }
    }else if(j>0 && b[j-1]==c[k-1]){
        return dp[i][j][k]=isAns(a,b,c,i,j-1,k-1);
    }else{
        return dp[i][j][k]=isAns(a,b,c,i,j,k-1);
    }
}
bool isInterleave(string A, string B, string C){
    //Your code here
    int n=A.size();
    int m=B.size();
    int o=C.size();
    memset(dp,-1,sizeof(dp));
    return isAns(A,B,C,n,m,o);
}
