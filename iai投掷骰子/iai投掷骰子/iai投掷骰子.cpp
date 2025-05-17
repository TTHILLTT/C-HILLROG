// iai投掷骰子.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
typedef long long LL;
bool isPossible(LL A, LL B) {
	for (LL d1 = 1; d1 <= 6; d1++) {
		for (LL d2 = 1; d2 <= 6; d2++) {
			for (LL d3 = 1; d3 <= 6; d3++) {
				LL redSum = 0, blackSum = 0;
				if (d1 == 1 || d1 == 4) {
					redSum += d1;
				}
				else {
					blackSum += d1;
				}
				if (d2 == 1 || d2 == 4) {
					redSum += d2;
				}
				else {
					blackSum += d2;
				}
				if (d3 == 1 || d3 == 4) {
					redSum += d3;
				}
				else {
					blackSum += d3;
				}
				if (redSum == A && blackSum == B) {
					return true;
				}
			}
		}
	}
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	LL T;
	cin >> T;
	while (T--) {
		LL A, B;
		cin >> A >> B;
		if (isPossible(A, B)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
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
