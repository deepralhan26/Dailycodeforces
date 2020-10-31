#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a1,b1,c1;
        cin>>a1>>c1>>b1;
        int a2,b2,c2;
        cin>>a2>>c2>>b2;
        int maxans=min(a1,c2)+min(b1,a2)+min(c1,b2);
        int ans=0;
        a2 -=min(a2,c1);
        if(a2>0)
            a2 -= min(a2,a1);
        if(a2>0)
            ans+=a2;


        b2 -=min(b2,a1);
        if(b2>0)
            b2 -= min(b2,b1);
        if(b2>0)
            ans+=b2;


        c2 -=min(c2,b1);
        if(c2>0)
            c2 -= min(c2,c1);
        if(c2>0)
            ans+=c2;
        cout<<ans<<" "<<maxans;






    }

    return 0;
}
