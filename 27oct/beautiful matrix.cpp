#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int t;
    t=1;
    while(t--)
    {
        int arr[5][5];
        int onex,oney;
        for(int i=0;i<5;i++)
        {
            for(int j =0;j<5;j++)
            {
                int x;
                cin>>x;
                arr[i][j] = x;
                if(x==1)
                {
                    onex = i;
                    oney = j;
                }
            }
        }
        cout<<abs(onex-2) + abs(oney-2);

    }

    return 0;
}
