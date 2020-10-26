#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    string a;
    cin>>a;
    int anton=0,danik=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='A')
            anton++;
        else
            danik++;
    }
    if(anton>danik)
        cout<<"Anton";
    else if(anton<danik)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}
