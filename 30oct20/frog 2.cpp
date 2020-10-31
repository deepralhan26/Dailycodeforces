#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int n,k;
vector<int>h;
vector<int>dp;
int fun(int x)
{
    if(dp[x]!=-1)
        return dp[x];
    int ans = (abs(h[x+1] - h[x]) + fun(x+1));
    int temp = ((x+k+1)<n)?k:(n-1-x);
    for(int i=2;i<=temp;i++)
    {
        ans = min(ans, (abs(h[x+i] - h[x]) + fun(x+i)));                  //dp[x] = min((abs(h[x+1] - h[x]) + fun(x+1)), (abs(h[x+2] - h[x]) + fun(x+2)));
    }
    dp[x] = ans;
    return dp[x];

}
int32_t main()
{
    cin>>n;
    cin>>k;
    h.resize(n);
    dp.resize(n);
    for(int i=0;i<n;i++)
        dp[i]=-1;
    for (int i=0;i<n ;i++ )
        cin>>h[i];
    dp[n-1] =0;
    dp[n-2] = abs(h[n-1] - h[n-2]);
    cout<<fun(0);

    return 0;
}
