#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
long long mod = 998244353;
long long mod_pow(long long x, long long y, long long p)
{
    long long res = 1;

    x = x % p;

    if (x == 0) return 0;

    while (y > 0)
    {

        if (y & 1)
            res = (res * x) % p;


        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

long long multi(long long a , long long b , long long m)
{
    long long res = 0;
    a = a%m;
    while (b > 0) {
        if (b & 1)
            res = (res + a)%m;
        a = (a%m + a%m)%m;
        b >>= 1;
    }
    return res;

}
int32_t main()
{
    IOS;
    int a,b,c;
    cin>>a>>b>>c;
    int ans = (a%2)? (multi(a,((a+1)>>1),mod)):(multi((a>>1),(a+1),mod));
    //cout<<ans<<"\n";
    int temp = (b%2)?(multi(b,((b+1)>>1),mod)):(multi((b>>1),(b+1),mod));
    //cout<<temp<<"\n";
    ans = multi(ans,temp,mod);
    //cout<<ans<<"\n";
    temp = (c%2)?(multi(c,((c+1)>>1),mod)):(multi((c>>1),(c+1),mod));
    //cout<<temp<<"\n";
    ans = multi(ans,temp,mod);
    cout<<ans%mod;





    return 0;
}
