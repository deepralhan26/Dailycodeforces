#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int t=1;

    while(t--)
    {
        string s;
        cin>>s;
        int temp = (int)s[0];
        if(temp<=90)
            cout<<s;
        else
        {
            temp = temp - 32;
            s[0] = (char)temp;
            cout<<s;
        }

    }

    return 0;
}
