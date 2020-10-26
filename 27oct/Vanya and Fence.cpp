#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    int n,height;
    cin>>n>>height;
    int width=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>height)
            width+=2;
        else
            width++;
    }
    cout<<width;

    return 0;
}
