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
        int n;
        cin>>n;
        if(n<3)
        {
            cout<<"NO";
        }
        else
        {
            if(n%2==0)
                cout<<"YES";
            else
                cout<<"NO";
        }


    }

    return 0;
}
