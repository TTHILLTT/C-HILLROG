// iai稳定区间.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL T;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);	
	cin >> T;
	while (T--) {
		LL n;
		cin >> n;
		vector<LL> a(n);
		for (LL i = 0; i < n; i++) {
			cin >> a[i];
		}
		LL ans = 0;
		for (LL l = 0; l < n; l++) {
			for (LL r = l + 1; r < n; r++) {
				if (a[l] != a[r]) {
					ans++;
				}
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
