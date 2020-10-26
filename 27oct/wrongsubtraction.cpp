#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        if(n%10 == 0)
            n /=10;
        else
            n--;
    }
    cout<<n;

    return 0;
}
