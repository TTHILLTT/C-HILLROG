// B3969 [GESP202403 五级] B-smooth 数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, B, cnt, zs[10000005];
//bool isPrime(int n) {
//	if (n % 2 != 0) {
//		if (n == 1) {
//			return false;
//		}
//		LL sqrt_n = sqrt(n);
//		for (int i = 3; i <= sqrt_n; i += 2) {
//			if (n % i == 0) {
//				return false;
//			}
//		}
//	}
//	else {
//		if (n == 2) {
//			return true;
//		}
//		return false;
//	}
//	return true;
//}
//bool isBSmooth(int x) {
//	for (LL i = 1; i <= x; i++) {
//		if (x % i == 0) {
//			if (isPrime(i)) {
//				if (i > B) {
//					return false;
//				}
//			}
//		}
//	}
//	return true;
//}
int main() {
	cin >> n >> B;
	zs[1] = 1;
	for (int i = 2; i <= n; i++) {
		if (!zs[i]) {
			for (int j = i; j <= n; j += i) {
				zs[j] = i;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (zs[i] <= B)
			cnt++;
	}
	cout << cnt;
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
