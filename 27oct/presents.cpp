#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int ans[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ans[x-1] = i+1;
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    return 0;
}
