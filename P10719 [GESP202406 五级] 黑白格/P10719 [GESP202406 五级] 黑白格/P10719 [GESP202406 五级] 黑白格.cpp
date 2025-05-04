// P10719 [GESP202406 五级] 黑白格.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, m, k, minn=0x3f3f3f3f;
bool mp[105][105];
LL pre[105][105];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m >> k;
	for (LL i = 1; i <= n; i++) {
		for (LL j = 1; j <= m; j++) {
			char c; cin >> c;
			mp[i][j] = c - '0';
			pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + mp[i][j];
		}
	}
	for (LL x_1 = 0; x_1 < n; x_1++) {
		for (LL y_1 = 0; y_1 < m; y_1++) {
			for (LL x_2 = x_1; x_2 <= n; x_2++) {
				for (LL y_2 = y_1; y_2 <= m; y_2++) {
					LL tmp = pre[x_2][y_2] - pre[x_2][y_1] - pre[x_1][y_2] + pre[x_1][y_1];
					if (tmp >= k) {
						minn = min(minn, (x_2 - x_1) * (y_2 - y_1));
					}
				}
			}
		}
	}
	if (minn == 0x3f3f3f3f) {
		cout << 0;
	}
	else {
		cout << minn;
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
