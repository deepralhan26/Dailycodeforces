#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    set<int>a;
    int first,second;
    cin>>first;
    for(int i=0;i<first;i++)
    {
        int x;
        cin>>x;
        a.insert(x);
    }
    cin>>second;
    for(int i=0;i<second;i++)
    {
        int x;
        cin>>x;
        a.insert(x);
    }
    if(a.size()== n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";

    return 0;
}
