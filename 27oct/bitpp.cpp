#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int t;
    cin>>t;
    int x =0;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]=='+' || s[1] =='+' )
            x++;
        else if (s[0]=='-' || s[1] =='-' )
            x--;
    }
    cout<<x;

    return 0;
}
