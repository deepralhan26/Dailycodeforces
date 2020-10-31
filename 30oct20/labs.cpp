#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long


int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int arr[n][n];
    int current=1;
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            arr[i][j] = current;;
            current++;
        }
    }
    current =1;
    for(int j=0;j<n;j++)
    {
        for(int i=n-1;i>=0;i--)
        {
            if(j%2)
            {
                arr[i][j] = current;
                current++;
            }
            else
            {
                current++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}
