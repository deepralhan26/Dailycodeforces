#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int ans=0;
    while(n--)
    {
        string a;
        cin>>a;
        if(a[0]=='T')
            ans += 4;
        else if(a[0]=='C')
            ans+=6;
        else if(a[0]=='O')
            ans+=8;
        else if(a[0]=='D')
            ans+=12;
        else if(a[0]=='I')
            ans+=20;
    }
    cout<<ans;
    return 0;
}
