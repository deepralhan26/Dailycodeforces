#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int  n,l,r,x;
    cin>>n>>l>>r>>x;
    int arr[n];
    int ans=0;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int mask =0; mask <(1<<n);mask++)
    {
        int minel = 1e6+1;
        int maxel =0;
        int sum =0;
        for(int i =0 ;i<n;i++)
        {
            if(mask & (1<<i))
            {
                sum+=arr[i];
                maxel = max(arr[i],maxel);
                minel = min(arr[i],minel);
            }
        }
        if(sum>=l && sum<=r && (maxel -minel)>=x)
            ans++;
    }
    cout<<ans;

    return 0;
}

