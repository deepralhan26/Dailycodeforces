#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    string a,b;
    cin>>a>>b;
    vector<char> c(a.length());
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='1' && b[i]=='0')
            c[i] = '1';
        else if(a[i]=='0' && b[i]=='1')
            c[i] ='1';
        else
            c[i] ='0';
        cout<<c[i];
    }


    return 0;
}
