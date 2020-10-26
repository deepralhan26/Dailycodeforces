#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int ans = n/5 ;
    if(n%5==0)
        cout<<ans;
    else
        cout<<ans+1;
    return 0;
}
