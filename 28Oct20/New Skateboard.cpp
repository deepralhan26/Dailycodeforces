#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
char s[300055];
int32_t main()
{
    IOS;
    scanf("%s", s);
    int cnt = 0;
    for (int i = 0; i<4; i++) {
        if ((s[i]) %4 == 0) cnt++;
    }
    for (int i = 1; i<4; i++) {
        int a = (s[i-1]) * 10 + (s[i]);
        if (a %4 == 0) {
            cnt += i;
        }
    }
    //1245 4,
    printf ("%I64d\n", cnt);


    return 0;
}
