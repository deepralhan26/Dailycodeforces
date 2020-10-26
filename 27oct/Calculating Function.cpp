#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    if(n==1)
        cout<<"-1";
    else if(n==2)
        cout<<"1";
    else
    {
        if(n%2)
        {
            cout<<(((n+1)>>1)*(-1)) ;
        }
        else
            cout<<((n>>1)*(-1))+ n;
    }

    return 0;
}
