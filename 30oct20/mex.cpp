#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int mex[3][3] = {{1,2,1},{2,0,0},{1,0,0}};
int32_t main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int zero=0,one=0,two=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[0][i] = x;
        if(x==0)
            zero++;
        else if(x==1)
            one++;
        else if(x==2)
            two++;

    }
    for(int i=1;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i][0] = x;
        if(x==0)
            zero++;
        else if(x==1)
            one++;
        else if(x==2)
            two++;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            int x;
            x = mex[arr[i-1][j]][arr[i][j-1]];
            arr[i][j] = x;
            cout<<x<<" ";
            if(x==0)
                zero++;
            else if(x==1)
                one++;
            else if(x==2)
                two++;

        }
        cout<<"\n";
    }
    //cout<<zero<<" "<<one<<" "<<two;

    return 0;
}
