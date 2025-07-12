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
	// 预先分配足够空间（最大位数=log_base(number)+1）
    	// 对于number<=10^12, base>=2, 最大位数<=40
    	result.reserve(40);  
	do {
		res += '0' + (x % base);
		x /= base;
	} while (x);
	// 注意：这里不反转字符串，保持低位在前
	return res;
}
/**
 * 计算10的整数次幂（避免浮点精度问题）
 * @param exponent 幂指数（非负整数）
 * @return 10的exponent次幂
 */
LL powerOfTen(int exponent) {
    LL result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= 10;
    }
    return result;
}
int main() {
	cin >> A >> N;
	ans = 0; 
	for (int len = 1; ; len++) {
		int halfLen = (len + 1) / 2;
		LL sstart = powerOfTen(halfLen - 1), eend = powerOfTen(halfLen);
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
