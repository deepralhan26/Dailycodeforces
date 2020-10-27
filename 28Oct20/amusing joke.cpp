#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    map<char,int>initial;
    map<char,int>given;
    string a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<a.size();i++)
        initial[a[i]]++;
    for(int i=0;i<b.size();i++)
        initial[b[i]]++;
    for(int i=0;i<c.size();i++)
        given[c[i]]++;
    int temp =0;
    if(c.size() == a.size()+b.size())
    {
        for(int i=65;i<=90;i++)
        {
            if(initial[(char)i] != given[(char)i])
            {
                temp=1;
                break;

            }
        }

        if(temp==0)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"NO";


    return 0;
}
