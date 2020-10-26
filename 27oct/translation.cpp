#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    string a,b;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    if(a.compare(b)==0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
