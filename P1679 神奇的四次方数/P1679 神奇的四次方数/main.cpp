#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
int main() {
	LL m;
	cin >> m;
	vector<LL> powers;
	for (LL i = 1; ; i++) {
		LL p = i * i * i * i;
		if (p > 100000) break;
		powers.push_back(p);
	}
	vector<LL> dist(m + 1, -1);
	queue<LL> q;
	dist[m] = 0;
	q.push(m);
	while (!q.empty()) {
		LL x = q.front();
		q.pop();
		if (x == 0) {
			cout << dist[x];
			goto end;
		}
		for (LL i = powers.size() - 1; i >= 0; i--) {
			LL p = powers[i];
			if (p > x) {
				continue;
			}
			LL y = x - p;
			if (y == 0) {
				cout << dist[x] + 1;
				goto end;
			}
			if (y > 0 && dist[y] == -1) {
				dist[y] = dist[x] + 1;
				q.push(y);
			}
		}
	}
	end:
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/