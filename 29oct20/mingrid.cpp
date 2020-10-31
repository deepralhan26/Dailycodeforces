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
        int m,n;
        cin>>m>>n;
        int dp[m][n];
        int arr[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        dp[0][0] = arr[0][0];
        for(int j=1;j<n;j++)
        {
            dp[0][j] = dp[0][j-1] + arr[0][j];
        }
        for(int i=1;i<m;i++)
            dp[i][0] = dp[i-1][0] + arr[i][0];
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j] = min((dp[i-1][j] + arr[i][j]),(dp[i][j-1]+arr[i][j]));
            }
        }
        cout<<dp[m-1][n-1];

    }

    return 0;
}

