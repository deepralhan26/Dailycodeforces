#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int n;
vector<int>h;
vector<int>dp;
int fun(int x)
{
    if(dp[x]!=-1)
        return dp[x];
    dp[x] = min((abs(h[x+1] - h[x]) + fun(x+1)), (abs(h[x+2] - h[x]) + fun(x+2)));
    return dp[x];

}
int32_t main()
{
    cin>>n;
    h.resize(n);
    dp.resize(n+5);
    for(int i=0;i<n+5;i++)
        dp[i]=-1;
    for (int i=0;i<n ;i++ )
        cin>>h[i];
    dp[n-1] =0;
    dp[n-2] = abs(h[n-1] - h[n-2]);
    cout<<fun(0);

    return 0;
}
