#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    double n;
    cin>>n;
    double ans =0;
    for(int i=0;i<(int)n;i++)
    {
        double x;
        cin>>x;
        ans += x;
    }
    cout<<setprecision(20)<<fixed<<ans/n;



    return 0;
}
