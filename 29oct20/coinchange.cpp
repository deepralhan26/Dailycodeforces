#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int t=1;
    while(t--)
    {
        int n,amount;
        cin>>n>>amount;
        int coins[n];
        for(int i=0;i<n;i++)
            cin>>coins[i];
        unsigned int dp[amount+1];
        for(int i=0;i<=amount;i++)
            dp[i] = INT_MAX;
        dp[0] =0;

        for(int i=1;i<=amount;i++)
        {
            for(int j =0 ;j<n;j++)
            {
                int x = coins[j];
                int temp =0;
                if((i-x)>=0)
                    dp[i] = min(dp[i],dp[i-x]+1);
            }
        }

        int ans = dp[amount];
        if(ans==INT_MAX)
            ans =-1;
        cout<<ans;



    }

    return 0;
}

