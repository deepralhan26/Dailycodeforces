#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int ans=0;
    for(int i=1;i<=d;i++)
    {
        if(i%k==0 || i%l==0 ||i%m==0 || i%n==0)
            ans++;

    }
    cout<<ans;


    return 0;
}
