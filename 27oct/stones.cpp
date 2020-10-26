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
        int ans =0,last_ind =0;
        char temp[n];
        cin>>temp[0];
        for(int i=1;i<n;i++)
        {
            char x;
            cin>>x;
            if(temp[last_ind]==x)
                ans++;
            else
            {
                last_ind++;
                temp[last_ind] =x;
            }
        }
        cout<<ans;

    }

    return 0;
}

