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
        int a,b;
        cin>>a>>b;
        int ans=0;
        while(a<=b)
        {
            ans++;
            a =3*a;
            b = 2*b;
        }
        cout<<ans;


    }

    return 0;
}
