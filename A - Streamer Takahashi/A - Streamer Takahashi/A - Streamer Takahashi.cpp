#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, l, r, cnt;
int main() {
	cin >> n >> l >> r;
	for (LL i = 1; i <= n; i++) {
		LL x, y;
		cin >> x >> y;
		if (x <= l && y >= r) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}