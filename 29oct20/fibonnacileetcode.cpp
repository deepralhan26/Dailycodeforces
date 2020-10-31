#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<2)
            cout<<"1";
        else
        {
            int prev = 1;
            int prevprev =1;
            int ans;
            for(int i=2;i<=n;i++)
            {
                ans = prev+prevprev;
                prevprev = prev;
                prev = ans;
            }
            cout<<ans;
        }
    }

    return 0;
}

