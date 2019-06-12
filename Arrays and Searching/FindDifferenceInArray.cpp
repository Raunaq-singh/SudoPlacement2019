#include<bits/stdc++.h>
using namespace std;
int findExtra(int a[],int b[],int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n-1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			cin>>b[i];
		}
		cout<<findExtra(a,b,n)<<endl;
	}
}
/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below*/
int findExtra(int a[],int b[],int n){
 //add code here.
 int i=0;
 while(a[i]==b[i] &&  i<n-1){
     i++;
 }
 return i;
}