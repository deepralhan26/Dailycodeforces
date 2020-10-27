#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int n;
bool good(int x)
{
    return (n >= ((3*(x)*(x+1))/2 - x));
}
int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int ans =0;
        cin>> n;
        while(n>=2)
        {
            int l= 0; // l is good
            int r = 1;// r is bad
            while(good(r))
                r =2*r;
            while(r>l+1)
            {
                int mid = l + (r-l)/2 ;
                if(good(mid))
                {
                    l =mid;
                }else
                {
                    r =mid;
                }
            }
            n -=  ((3*(l)*(l+1))/2 - l);
            ans++;
        }
        cout<<ans<<"\n";
    }




    return 0;
}
