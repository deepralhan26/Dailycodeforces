#include <bits/stdc++.h>
using namespace std;
int dp[105][3];
int minimumRest(vector<int>& v, int length, int last, int i) {
	if (i >= length) {
		return 0;
	}

	if (dp[i][last] != -1) {
		return dp[i][last];
	}

	if (v[i] == 0) {
		dp[i][last] = minimumRest(v, length, 0, i+1) + 1;
	}
	else if (v[i] == 1) {
		if (last == v[i]) {
			dp[i][last] = minimumRest(v, length, 0, i+1) + 1;
		}
		else {
			dp[i][last] = minimumRest(v, length, 1, i+1);
		}
	}
	else if (v[i] == 2) {

		if (last == v[i]) {
			dp[i][last] = minimumRest(v, length, 0, i+1) + 1;
		}
		else {
			dp[i][last] = minimumRest(v, length, 2, i+1);
		}
	}
	else if (v[i] == 3) {
		int a = last == 1 ? INT_MAX : dp[i][last] = minimumRest(v, length, 1, i+1);
		int b = last == 2 ? INT_MAX : dp[i][last] = minimumRest(v, length, 2, i+1);
		dp[i][last] = min(a, b);
	}

	return dp[i][last];
}

int32_t main()
{
	memset(dp, -1, sizeof(dp));
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
        cin>>v[i];
	int ans = minimumRest(v, n, 0, 0);

	cout<<ans;

	return 0;
}
