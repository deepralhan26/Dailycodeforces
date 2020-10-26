#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    string a;
    cin>>a;
    int n = a.length();
    int upper=0;
    int lower =0;
    for(int i=0;i<n;i++)
    {
        if((int)a[i]>92)
            lower++;
        else
            upper++;
    }
    if(upper>lower)
        transform(a.begin(),a.end(),a.begin(),::toupper);
    else
        transform(a.begin(), a.end(), a.begin(), ::tolower);
    cout<<a;
    return 0;
}
