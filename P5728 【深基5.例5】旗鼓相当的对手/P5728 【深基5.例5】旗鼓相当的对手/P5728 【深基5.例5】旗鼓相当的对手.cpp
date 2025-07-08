#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, ans;
struct sc {
	LL c, m, e;
}score[1005];
int main() {
	cin >> n;
	for (LL i = 1; i <= n; i++) {
		cin >> score[i].c >> score[i].m >> score[i].e;
	}
	for (LL i = 1; i <= n; i++) {
		for (LL j = 1; j <= n; j++) {
			if (i == j) {
				continue;
			}
			if (abs(score[i].c - score[j].c) <= 5 && abs(score[i].m - score[j].m) <= 5 && abs(score[i].e - score[j].e) <= 5 && (abs((score[i].c + score[i].m + score[i].e) - (score[j].c + score[j].m + score[j].e))) <= 10) {
				ans++;
			}
		}
	}
	cout << ans / 2;
	return 0;
}
// TTHILLTT