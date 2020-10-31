#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int t=1;
    while(t--)
    {
        int n,target;
        cin>>n>>target;
        int nums[n];
        for(int i=0;i<n;i++)
            cin>>nums[i];
        unsigned int dp[target+1];
        for(int i=0;i<=target;i++)
            dp[i] =0;
        dp[0] =1;

        for(int i=0;i<=target;i++)
        {
            for(int j =0 ;j<n;j++)
            {
                int x = nums[j];
                int temp =0;
                if((i-x)>=0)
                    temp = dp[i-x];
                dp[i] += temp;
            }
        }
        cout<<dp[target];



    }

    return 0;
}

