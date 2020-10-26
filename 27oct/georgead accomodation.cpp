#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int people[n];
    int cap[n];
    for(int i=0;i<n;i++)
    {
        cin>>people[i]>>cap[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(cap[i]-people[i]>=2)
            ans++;
    }
    cout<<ans;
    return 0;
}
