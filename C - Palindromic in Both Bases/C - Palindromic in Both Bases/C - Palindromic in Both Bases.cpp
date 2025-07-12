#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL A, N, ans;
bool is(const string& s) {
	int l = 0, r = s.size() - 1;
	while (l < r) {
		if (s[l] != s[r]) {
			return false;
		}
		l++;
		r--;
	}
	return true;
}
string toBase(LL x, int base) {
	string res;
	do {
		res += '0' + (x % base);
		x /= base;
	} while (x);
	reverse(res.begin(), res.end());
	return res;
}
int main() {
	cin >> A >> N;
	ans = 0; 
	for (int len = 1; ; len++) {
		int halfLen = (len + 1) / 2;
		LL sstart = pow(10, halfLen - 1), eend = pow(10, halfLen);
		for (LL half = sstart; half < eend; half++) {
			string s = to_string(half), t = s;
			if (len % 2) {
				t.pop_back();
			}
			reverse(t.begin(), t.end());
			LL pal = stoll(s + t);
			if (pal > N) {
				goto end;
			}
			string abase = toBase(pal, A);
			if (is(abase)) {
				ans += pal;
			}
		}
	}
	end:
	cout << ans;
	return 0;
}