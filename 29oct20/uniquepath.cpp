#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int t=2;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int dp[m][n];
        dp[0][0] = 1;
        for(int j=1;j<n;j++)
        {
            dp[0][j] = 1;
        }
        for(int i=1;i<m;i++)
            dp[i][0] = 1;
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j] = dp[i-1][j]+ dp[i][j-1];
            }
        }
        cout<<dp[m-1][n-1];

    }

    return 0;
}

