#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{

    string a,b;
    cin>>a>>b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    int temp = a.compare(b);
    if(temp<0)
        cout<<"-1";
    else if(temp==0)
        cout<<"0";
    else
        cout<<"1";

    return 0;
}

