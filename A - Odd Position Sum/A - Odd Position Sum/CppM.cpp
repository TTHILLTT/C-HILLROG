#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	vector<LL> a(n);
	for (auto& x : a) cin >> x;
	LL cnt = 0;
	for (LL i = 0; i < n; i += 2) cnt+=a[i];
	cout << cnt << "\n";
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/