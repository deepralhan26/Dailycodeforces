#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];
    int maxel=a[0];
    int minel = a[0];
    int maxind =0;
    int minind =0;
    for(int i=1;i<n;i++)
    {
        int x;
        cin>>x;
        a[i] =x;
        if(x>maxel)
        {
            maxel =x;
            maxind =i;
        }
        if(x<=minel)
        {
            minel =x;
            minind =i;
        }

    }
    int ans =0;
    while(minind!=(n-1))
    {
        int temp = a[minind];
        a[minind] = a[minind+1];
        ans++;
        if(minind+1 == maxind)
        {
            maxind --;
        }
        a[minind+1] = temp;
        minind++;
    }
    while(maxind != 0)
    {
        int temp = a[maxind];
        a[maxind] = a[maxind -1];
        ans++;
        a[maxind-1] = temp;
        maxind--;
    }
    cout<<ans;

    return 0;
}
