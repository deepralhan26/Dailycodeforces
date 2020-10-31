#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans=0;
    int temp = -1;
    int tempind = -1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1 || a[i]==2)
        {
            temp = a[i];
            tempind= i;
            break;
        }
    }
    if(a[0]==0)
        ans++;
    else if(a[0]==3)
    {
        if(a[1]==3)
        {
            if(temp==-1)
                a[0]==1;
            else
            {
                if(tempind%2)
                {
                    if(temp==2)
                        a[0]=1;
                    else
                        a[0]=2;
                }
                else
                {
                   a[0] = temp;
                }
            }
        }
    }

    for(int i=1;i<n;i++)
    {
        if(a[i]==0)
            ans++;
        else if(a[i]!=a[i-1] && a[i-1]!=0)
        {
            if(a[i]==3)
            {
                if(a[i-1]==1)
                    a[i] =2;
                else
                    a[i] =1;
            }

        }
        else if(a[i]==a[i-1])
        {
            if(a[i]!=3)
            {
                ans++;
                a[i]=0;
            }

        }
    }
    cout<<ans;
    return 0;
}
