#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int maxdig(int n)
{
    int ans =0;
    while(n>0)
    {
        ans = max(ans,n%10);
        n/=10;
    }
    return ans;
}
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int sol=0;
    while(n>0)
    {
        n -= maxdig(n);
        sol++;
    }
    cout<<sol;

    return 0;
}
