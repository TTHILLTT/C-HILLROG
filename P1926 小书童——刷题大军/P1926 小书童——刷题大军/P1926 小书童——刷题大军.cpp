#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, m, k, r, minTime = 0x3f3f3f3f, times[15], timePerOneTimeForHomework[15], theScoreForHomework[55];
int main() {
	cin >> n >> m >> k >> r;
	for (LL i = 0; i < n; i++) {
		cin >> times[i];
	}
	for (LL i = 0; i < m; i++) {
		cin >> timePerOneTimeForHomework[i];
	}
	for (LL i = 0; i < m; i++) {
		cin >> theScoreForHomework[i];
	}
	for (LL mask = 0; mask < (1 << m); mask++) {
		LL sumScore = 0, sumTime = 0;
		for (LL i = 0; i < m; i++) {
			if (mask & (1 << i)) {
				sumScore += theScoreForHomework[i];
				sumTime += timePerOneTimeForHomework[i];
			}
		}
		if (sumScore >= k) minTime = min(minTime, sumTime);
	}

	LL left_time = r - minTime;
	sort(times, times + n);
	LL cnt = 0;
	for (LL i = 0; i < n && left_time >= times[i]; ++i) {
		left_time -= times[i];
		cnt++;
	}
	cout << cnt;
	return 0;
}
/*
================================================
		Programed By TTHILLTT				  /
		Powered By Visual Studio 2022		 /
=============================================
*/