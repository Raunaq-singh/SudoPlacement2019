#include <iostream>
using namespace std;
int remainderWith7(string );
int main() {
	// your code goes here
int t;
cin>>t;
while(t--)
{
string n;
cin>>n;
cout<<remainderWith7(n)<<endl;
}
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete this method */
int remainderWith7(string n)
{
    //Your code here
    int ret=0;
    int temp;
    for(auto it:n){
        temp=it-'0';
        ret=ret*10 + temp;
        ret=ret%7;
    }
    return (ret%7);
}