#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int a,b;
int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>=b/2 && b>=a/2)
        {
            cout<<(a+b)/3<<"\n";
        }
        else if(a<b/2 && b>a/2)
        {
            cout<<a<<"\n";
        }
        else if(a>b/2 && b<a/2)
        {
            cout<<b<<"\n";
        }
        else
            cout<<"0\n";


    }

    return 0;
}
