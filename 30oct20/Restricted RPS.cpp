#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a,b,c;
        cin>>a>>b>>c;
        string s;
        cin>>s;
        int rock=0,sci=0,pap=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')
            {
                rock++;
            }

            else if(s[i]=='P')
            {
                pap++;
            }

            else
            {
                sci++;
            }
        }
        int ans=min(a,sci)+min(b,rock)+min(c,pap);
        if(ans<((n+1)/2))
            cout<<"NO\n";
        else
        {
            vector<char>fin(n);

            cout<<"YES\n";
            for(int i=0;i<n;i++)
                fin[i] = 'N';
            for(int i=0;i<n;i++)
            {
                if(s[i]=='R')
                {
                    if(b>0)
                    {
                        fin[i] = 'P';
                        b--;
                    }
                }

                else if(s[i]=='P')
                {
                    if(c>0)
                    {
                        fin[i]='S';
                        c--;
                    }

                }

                else if(s[i]=='S')
                {
                    if(a>0)
                    {
                        fin[i] ='R';
                        a--;
                    }
                }
            }
            for(int i=0;i<n;i++)
            {
                if(fin[i]=='N')
                {
                    if(a>0)
                    {
                        fin[i]='R';
                        a--;
                    }
                    else if(b>0)
                    {
                        fin[i]='P';
                        b--;
                    }
                    else if(c>0)
                    {
                        fin[i] = 'S';
                        c--;
                    }
                }
            }
            for(int i=0;i<n;i++)
                cout<<fin[i];
            cout<<"\n";

        }

    }

    return 0;
}
