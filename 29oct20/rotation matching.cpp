#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
vector<int>a;
vector<int>b;
int n;

void rightrotate(void)
{
    int n=a.size();
    int temp1 = a[0];
    int temp;
    for(int i=0;i<n-1;i++)
    {
        temp = a[i+1];
        a[i+1] = temp1;
        temp1 = temp;
    }
    a[0] = temp;

}
int maxcommon(void)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
            ans++;
    }
    return ans;
}

int32_t main()
{


    cin>>n;
    a.resize(n);
    b.resize(n);
    for(int i=0;i<n ;i++ )
        cin>>a[i];

    for (int i=0;i<n ;i++ )
        cin>>b[i];

    int ans=1;
    for(int i=0;i<n-1;i++)
    {
        rightrotate();
        ans =max(ans,maxcommon());
    }
    cout<<ans;
    return 0;
}
