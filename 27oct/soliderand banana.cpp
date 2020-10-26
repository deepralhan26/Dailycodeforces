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
        int k,n,w;
        cin>>k>>n>>w;
        int temp = ((w*(w+1))/2)*k - n;
        if(temp>=0)
            cout<<temp;
        else
            cout<<0;


    }

    return 0;
}
