#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int temp=0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int mask =0 ; mask<(1<<n);mask++)
    {
        int sum =0;
        for(int i=0;i<n;i++)
        {
            if((mask&(1<<i))==0)
            {
                sum+= arr[i];
            }
            else
            {
                sum-= arr[i];
            }
        }
        if(sum%360==0)
        {
            temp =1;
            cout<<"YES";
            break;
        }
    }
    if(temp==0)
        cout<<"NO";

    return 0;
}

