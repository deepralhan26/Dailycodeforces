#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    string a;
    getline(cin,a);
    set<char> s;
    for(int i=0;i<a.size();i++)
    {
        if((int)a[i] >= 97 && (int)a[i]<=122)
            s.insert(a[i]);
    }
    cout<<s.size();

    return 0;
}
