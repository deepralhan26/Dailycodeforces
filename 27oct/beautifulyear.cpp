#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
bool isunique(int n)
{
    int a,b,c,d;
    d = n%10;
    n =n/10;
    c = n%10;
    n/=10;
    b =n%10;
    n/=10;
    a = n%10;
    set<int>s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    return s.size()==4;
}
int32_t main()
{
    int n;
    cin>>n;
    int year = n;
    int a,b,c,d;
    n++;
    while(!isunique(n))
    {
        n++;
    }
    cout<<n;
    return 0;
}
