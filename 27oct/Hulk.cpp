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
        cout<<"I hate it";
    else if(n==2)
        cout<<"I hate that I love it";
    else
    {
        for(int i =0;i<(n-1)/2;i++)
            cout<<"I hate that I love that ";
        if(n%2)
            cout<<"I hate it";
        else
            cout<<"I hate that I love it";
    }


    return 0;
}
