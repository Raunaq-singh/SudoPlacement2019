#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>n>>s;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int i=0,j=0,sum=0;
	    while(i<n){
	        if(sum<s){
	            if(j==n){
	                break;
	            }else{
	                sum+=a[j++];
	            }
	        }else if(sum>s){
	            sum-=a[i++];
	        }else{
	            break;
	        }
	    }
	    if(sum==s){
	        cout<<i+1<<" "<<j<<"\n";
	    }else{
	        cout<<"-1\n";
	    }
	}
	return 0;
}