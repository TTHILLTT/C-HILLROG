#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
LL n, m;
int main() {
	cin >> n >> m;
	vector<LL> a(500005), gap;
	for (LL i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(&a[1], &a[n + 1]);
	for (LL i = 1; i < n; i++) {
		gap.push_back(a[i + 1] - a[i]);
	}
	sort(gap.begin(), gap.end(), greater<LL>());
	LL ans = 0;
	for(LL i = 0; i < m - 1; i++) {
		ans += gap[i];
	}
	LL total = a[n] - a[1];
	cout << total - ans;
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/