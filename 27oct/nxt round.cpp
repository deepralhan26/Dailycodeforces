#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long


int32_t main()
{
    IOS;
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int advanced =0;
    int required = a[k-1];
    for(int i=0;i<n;i++)
    {
        if(a[i]>= required && a[i]>0)
            advanced++;
        else
            break;
    }
    cout<<advanced;
    return 0;
}
