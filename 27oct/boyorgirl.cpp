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
        string s;
        cin>>s;
        set<char> a(s.begin(),s.end());
        if(a.size()%2)
            cout<<"IGNORE HIM!";
        else
            cout<<"CHAT WITH HER!";

    }

    return 0;
}

