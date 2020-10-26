#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int nooflucky =0;
    while(n>0)
    {
        int a =n%10;
        if(a==7 || a==4)
            nooflucky++;
        n /=10;
    }
    if(nooflucky==7 || nooflucky==4)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
