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
        string s;
        cin>>s;
        int one=0,two=0,three=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
                one++;
            if(s[i]=='2')
                two++;
            if(s[i]=='3')
                three++;
        }
        if(three>0)
        {
            for(int i =0;i<one;i++)
                cout<<"1+";
            for(int i =0;i<two;i++)
                cout<<"2+";
            for(int i =0;i<three-1;i++)
                cout<<"3+";
            cout<<"3";

        }
        else if(two>0)
        {
            for(int i =0;i<one;i++)
                cout<<"1+";
            for(int i =0;i<two-1;i++)
                cout<<"2+";

            cout<<'2';
        }
        else
        {
            for(int i =0;i<one-1;i++)
                cout<<"1+";
            cout<<"1";
        }
    }
    return 0;
}
