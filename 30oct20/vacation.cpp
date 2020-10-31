#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int n,k;
vector<int>a;
vector<int>b;
vector<int>c;
int dp[100005][3];
int fun(int x,int last)
{
    if(dp[x][last]!=-1)
        return dp[x][last];
    if(x>n-1)
        return 0;
    if(last==0)
    {
        dp[x][last] = max((b[x] + fun(x+1,1)) , (c[x] + fun(x+1,2)));
        return dp[x][last];
    }
    else if(last==1)
    {
        dp[x][last] = max((a[x] + fun(x+1,0)) , (c[x] + fun(x+1,2)));
        return dp[x][last];
    }
    else if(last==2)
    {
        dp[x][last] = max((a[x] + fun(x+1,0)) , (b[x] + fun(x+1,1)));
        return dp[x][last];
    }

}
int32_t main()
{
    cin>>n;
    a.resize(n);
    b.resize(n);
    c.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
            dp[i][j] =-1;
    }
    cout<<max(fun(0,0),max(fun(0,1),fun(0,2)));


    return 0;
}
