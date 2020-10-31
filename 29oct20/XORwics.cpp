#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
const int M = 32;
int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        bitset<M>a1(a);
        bitset<M>b1(b);
        bitset<M>x  = a1&b1;
        a1 = a1^x;
        b1 = b1^x;
        a = a1.to_ullong();
        b = b1.to_ullong();
        cout<<a+b<<"\n";

    }

    return 0;
}
