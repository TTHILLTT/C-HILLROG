#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
string s;
LL n, ans, l[500005], r[500005], a[500005];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> s;
	n = s.size() + 1;
	for (LL i = 1; i < n; i++) {
		if (s[i - 1] == '<') {
			l[i] = l[i - 1] + 1;
		}
	}
	for (LL i = n - 2; i >= 0; i--) {
		if (s[i] == '>') {
			r[i] = r[i + 1] + 1;
		}
	}
	for (LL i = 0; i < n; i++) {
		a[i] = max(l[i], r[i]);
		ans += a[i];
	}
	cout << ans << endl;
	/*
	for (LL i = 0; i < n; i++) {
		cout << l[i] << ' ';
	}
	for (LL i = 0; i < n; i++) {
		cout << r[i] << ' ';
	}
	*/
	for (LL i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	return 0;
}