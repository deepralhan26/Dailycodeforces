#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    int n;
    cin>>n;
    int groups =1;
    int temp;
    cin>>temp;
    int prev;
    int current;
    if(temp==10)
        prev = 0;
    else
        prev =1;
    for(int i=1;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==10)
            current = 1;
        else
            current =0;
        if(prev==current)
            groups++;
        if(x==10)
            prev = 0;
        else
            prev =1;
    }
    cout<<groups;
    return 0;
}
