#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int ans = n/100;
    n = n%100;
    ans += n/20;
    n = n%20;
    ans += n/10;
    n = n%10;
    ans += n/5;
    n = n%5;
    ans+=n;

    cout<<ans;

    return 0;
}
