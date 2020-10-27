#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int n,a,r,m;
vector<int>height;
int f(int level)
{
    int put =0;
    int remov =0;
    for(int i=0;i<n;i++)
    {
        if(height[i]<=level)
            put+= level -height[i] ;
        else
            remov+= height[i] -level;
    }
    int both = min(put,remov);
    put-=both;
    remov-=both;
    return (put*a+remov*r + both*min((a+r),m));

}


int32_t main()
{
    IOS;

    cin>>n>>a>>r>>m;
    height.resize(n);

    for(int i=0;i<n;i++)
    {
        cin>>height[i];
    }
    int l= 0;
    int r = 1e9;

      while (r - l >= 3)
    {
        int m1 = l + (r - l) / 3;
        int m2 = r - (r - l) / 3;   // 101  l=0 r=2  m1=0 m2 = 2 //
        int f1 = f(m1);
        int f2 = f(m2);
        if (f1> f2)
            l = m1;
        else
            r = m2 ;
    }
    cout<<min(f(l),min(f(l+1),f(r)));
    return 0;
}
