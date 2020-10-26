#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int n,m;
    cin>>m>>n;
    if(m==1)
        cout<<n/2;
    else if(n==1)
        cout<<m/2;
    else
    {
        if(n%2)
        {
            cout<< m*(n/2) + m/2;
        }
        else
        {
            cout<<m*(n/2);
        }
    }

    return 0;
}
