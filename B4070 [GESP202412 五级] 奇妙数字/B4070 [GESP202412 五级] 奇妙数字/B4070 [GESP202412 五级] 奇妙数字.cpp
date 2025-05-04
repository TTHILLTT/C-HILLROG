// B4070 [GESP202412 五级] 奇妙数字.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, ans, val[1000005], maxx;
int main() {
	cin >> n;
	LL sqrt_n = sqrt(n);
	for (LL i = 2; i<=sqrt_n; i++) {
		while (n % i == 0) {
			n /= i;
			val[i]++;
			maxx = max(maxx, i);
		}
	}
	if (n != 1) {
		ans++;
	}
	for (LL i = 1; i <= maxx; i++) {
		LL l = 0, r = val[i] + 1;
		while (l + 1 < r) {
			LL mid = (l + r) / 2;
			if (mid * (mid + 1) <= val[i] * 2) {
				l = mid;
			}
			else {
				r = mid;
			}
		}
		ans += l;
	}
	cout << ans;
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
