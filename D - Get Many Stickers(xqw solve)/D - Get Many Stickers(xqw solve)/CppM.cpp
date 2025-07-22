#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n;
int m;
struct cola {
	LL a, b;
	bool operator < (const cola& c) const {
		return a - b < c.a - c.b;
	}
}r[200005];
int main() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> r[i].a >> r[i].b;
	}
	sort(r + 1, r + m + 1);
	LL ans = 0;
	for (int i = 1; i <= m; i++) {
		if (n < r[i].a) {
			continue;
		}
		LL d = (n - r[i].a) / (r[i].a - r[i].b) + 1;
		ans += d;
		n -= d * (r[i].a - r[i].b);
	}
	cout << ans;
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/