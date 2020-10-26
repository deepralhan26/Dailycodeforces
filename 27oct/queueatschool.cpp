#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int n,t;
    cin>>n>>t;
    string a;
    cin>>a;
    while(t--)
    {

        for(int i=0;i<n-1;i++)
        {
            if(a[i]=='B' && a[i+1]=='G')
            {
                a[i] ='G';
                a[i+1] ='B';
                i++;
            }
        }
    }
    cout<<a;
    return 0;
}
