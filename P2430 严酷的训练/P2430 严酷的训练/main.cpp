#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
LL a, b, n, m, t1[5005], t2[5005], t, p[5005], q[5005], dp[5005];
int main() {
	cin >> a >> b >> m >> n;
	for (LL i = 1; i <= n; i++) {
		cin >> t1[i];
		t2[i] = t1[i] * (b / a);
	}
	for (LL i = 1; i <= m; i++) {
		cin >> p[i] >> q[i];
	}
	cin >> t;
	for (LL i = 1; i <= m; i++) {
		for (LL j = t; j >= t2[p[i]]; j--) {
			dp[j] = max(dp[j], dp[j - t2[p[i]]] + q[i]);
		}
	}
	cout << dp[t];
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/