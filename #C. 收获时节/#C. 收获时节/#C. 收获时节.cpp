#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, a[100005];/*
struct node {
	LL val, num;
}a[100005];*/
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;/*
	for(LL i = 0; i <= 100005; i++) {
		a[i].val = i;
	}*/
	for (LL i = 1; i <= n; i++) {
		LL x;
		cin >> x;
		a[x]++;
	}
	sort(a, a + 100005);
	cout << a[100004] + a[100003] + a[100002];
	return 0;
}