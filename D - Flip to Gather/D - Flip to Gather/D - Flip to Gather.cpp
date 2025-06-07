// D - Flip to Gather.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL t, sum[200005], ans;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> t;
	while (t--) {
		LL n;
		string s;
		cin >> n >> s;
		for (LL i = 0; i < n; i++) {
			if (s[i] == '1') {
				sum[i + 1] = sum[i] + 1;
			}
			else {
				sum[i + 1] = sum[i];
			}
		}
		ans = n;
		for (LL l = 0; l <= n; l++) {
			for (LL r = l; r <= n; r++) {
				LL flip0to1 = (r - l) - (sum[r] - sum[l]), flip1to0 = sum[l] + (sum[n] - sum[r]);
				ans = min(ans, flip0to1 + flip1to0);
			}
		}
		cout << ans << endl;
	}
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
