#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL v, n, c, tj[10005], tl[10005], f[10005];
int main() {
	cin >> v >> n >> c;
	for (LL i = 1; i <= n; i++) {
		cin >> tj[i] >> tl[i];
	}
	for (LL i = 1; i <= n; i++) {
		for (LL j = c; j >= tl[i]; j--) {
			f[j] = max(f[j], f[j - tl[i]] + tj[i]);
		}
	}
	if (f[c] < v) {
		cout << "Impossible";
	}
	else {
		LL i = c;
		while (f[i] >= v) {
			i--;
		}
		cout << c - (i + 1);
	}
	return 0;
}

/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/