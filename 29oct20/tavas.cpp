#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int ans =1;
    int len=0;
    while(n)
    {
        if(n%10==7)
            ans += (1 << len);
        len++;
        n/=10;
    }
    for (int i = 1; i < len; i++)
		ans += (1 << i);
    cout<<ans;





    return 0;
}
