#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair <ll,ll> pll;
#define mod 1000000007
#define inf 1000000000000000000

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float h,m;
        cin>>h>>m;
        int ans=0;
        if(m==60)
        {
            m=0;
        }
        float temp = m/2;
        float hy=h*30+temp;
        float my=m*6;
        float z=abs(my-hy);
        if(z>180)
            z=360-z;
        cout<<int(z)<<endl;
    }
    return 0;
}