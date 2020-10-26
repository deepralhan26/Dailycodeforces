#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int host[n];
    int guest[n];
    int ans=0;
    for(int i=0;i<n;i++)
        cin>>host[i]>>guest[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(host[i]== guest[j])
                ans++;

        }
    }
    cout<<ans;
    return 0;
}
