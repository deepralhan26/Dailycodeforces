#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int sum =0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            sum+=x;
        }
        if(sum==m)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
