#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, q;
string s;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> q >> s;
	while (q--) {
		LL op;
		cin >> op;
		if (op == 1) {
			LL i;
			char x;
			cin >> i >> x;
			s[i - 1] = x;
		}
		else if (op == 2) {
			LL l, r;
			cin >> l >> r;
			LL maxlen = 1, curlen = 1;
			for (LL j = l; j < r; j++) {
				if (s[j] == s[j - 1]) {
					curlen++;
				}
				else {
					curlen = 1;
				}
				if (curlen > maxlen) maxlen = curlen;
			}
			cout << maxlen << endl;
		}
	}
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/