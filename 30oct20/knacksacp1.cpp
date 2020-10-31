#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int n, W;
vector<int>wt;
vector<int>val;
int dp[105][100005];
int fun(int W, int i)
{
    if (i < 0)
        return 0;
    if (dp[i][W] != -1)
        return dp[i][W];

    if (wt[i] > W) {
        dp[i][W] = fun(W, i - 1);
        return dp[i][W];
    }
    else {
        dp[i][W] = max(val[i] + fun(W - wt[i], i - 1), fun(W, i - 1));
        return dp[i][W];
    }
}
int32_t main()
{
    IOS;
    cin>>n>>W;
    wt.resize(n);
    val.resize(n);
    for (int i = 0; i < n; i++)
        cin >> wt[i] >> val[i];
    for (int i = 0; i < n + 5; i++)
    {
        for (int j = 0; j < W + 5; j++)
            dp[i][j] = -1;
    }
    cout << fun(W, n-1);
    return 0;
}
