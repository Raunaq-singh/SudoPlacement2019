#include <bits/stdc++.h>
using namespace std;
void convertToRoman(int ) ;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		
	convertToRoman(N);
	cout<<endl;
		
	}
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
/*you are required to complete 
this function*/
void convertToRoman(int n) {
    string roman[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int nums[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string result = "";
    int myNum = n;
    int i = 12;
    for(i=12; i>=0; i--){
        while(myNum>=nums[i]){
            result = result + roman[i];
            myNum = myNum - nums[i];
        }
    }
    cout<<result;
//Your code here
}