#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
LL s, n, d, x[15], y[15], dp[1000005];
int main() {
	cin >> s >> n >> d;
	for (LL i = 1; i <= d; i++) {
		cin >> x[i] >> y[i];
	}
	for (LL k = 1; k <= n; k++) {
		memset(dp, 0, sizeof(dp));
		for (LL i = 1; i <= d; i++) {
			for (LL j = x[i] / 1000; j <= s / 1000; j++) {
				dp[j] = max(dp[j], dp[j - x[i] / 1000] + y[i]);
			}
		}
		s += dp[s / 1000];
	}
	cout << s;
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/