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
        map<int ,int>mp;
        set<int>s;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
            mp[x]++;
        }
        map<int, int>::iterator it;
        pair<int, int> MaxValue = make_pair(0, 0);
        for (it = mp.begin(); it != mp.end(); ++it)
        {
            if (it->second > MaxValue.second)
            {
                MaxValue = make_pair( it->first, it->second);
            }
        }
        int uniqueel = s.size();
        int freqmax = MaxValue.second;
        if(uniqueel>freqmax)
            cout<<freqmax<<"\n";
        else if(uniqueel==freqmax)
            cout<<freqmax-1<<"\n";
        else
            cout<<uniqueel<<"\n";
    }

    return 0;
}
