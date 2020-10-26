#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int t;
    cin>>t;
    int solved =0;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)>=2)
            solved++;
    }
    cout<<solved;

    return 0;
}
