#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    set<int>a;
    a.insert(s1);
    a.insert(s2);
    a.insert(s3);
    a.insert(s4);
    cout<<4 - a.size();
    return 0;
}
