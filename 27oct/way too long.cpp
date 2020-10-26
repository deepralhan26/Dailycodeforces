#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.length()<=10)
            cout<<s<<"\n";
        else
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<"\n";

    }

    return 0;
}
