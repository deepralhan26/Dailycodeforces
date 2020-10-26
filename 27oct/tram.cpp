#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int maxcap =0;
    int atpresent =0;
    for(int i=0;i<n;i++)
    {
        atpresent += b[i] - a[i];
        maxcap = max(maxcap,atpresent);
    }
    cout<<maxcap;

    return 0;
}
