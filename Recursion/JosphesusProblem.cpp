#include <bits/stdc++.h>
using namespace std;
int josephus(int n, int k);
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		cout<<josephus(n,k)<<endl;
	}
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete this method */
int josephus(int n, int k){
   //Your code here
   if(n==1){
       return 1;
   }
   vector<int>rem;
   for(int i=0;i<n;i++){
       rem.push_back(i);
   }
   int nextKill=k-1;
   while(rem.size()!=1){
       rem.erase(rem.begin()+nextKill);
       nextKill=(nextKill+k-1)%rem.size();
   }
   return (rem[0]+1);
}
