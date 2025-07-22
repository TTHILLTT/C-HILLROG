#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL k, p[205], f[205][205];
LL prime(LL n) {
	if (n < 2) {
		return 0;
	}
	for (LL i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
void dfs(LL x, LL b) {
	if (f[x][b]) {
		return;
	}
	if (prime(x)) {
		f[x][b]++;
	}
	for (LL i = b; i <= k; i++) {
		if (p[i] > x - p[i]) {
			return;
		}
		dfs(x - p[i], i);
		f[x][b] += f[x - p[i]][i];
	}
	return;
}
int main() {
	LL n;
	for (LL i = 2; i <= 200; i++) {
		if (prime(i)) {
			p[++k] = i;
		}
	}
	while (cin >> n) {
		dfs(n, 1);
		cout << f[n][1] << endl;
	}
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/