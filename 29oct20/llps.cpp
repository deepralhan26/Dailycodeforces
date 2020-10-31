#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    string s;
    cin>>s;
    int maxi = s[0];
    for(int i=1;i<s.size();i++)
    {
        if(s[i]>maxi)
        {
            maxi = s[i];
        }
    }
    int freq=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==maxi)
            freq++;
    }
    for(int i=0;i<freq;i++)
        cout<<(char)maxi;

    return 0;
}

