// B3929 [GESP202312 五级] 小杨的幸运数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL MAXX = 2000000;
bool isLucky[MAXX + 1];
LL a, N, nextLucky[MAXX + 2], startt, iMax;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> a >> N;
	startt = (LL)sqrt(a);
	iMax = (LL)sqrt(MAXX);
	for (LL i = startt; i <= iMax; i++) {
		LL d = i * i;
		for (LL j = d; j <= MAXX; j += d) {
			isLucky[j] = true;
		}
	}
	nextLucky[MAXX + 1] = MAXX + 1;
	for (LL i = MAXX; i >= 1; i--) {
		if (isLucky[i]) {
			nextLucky[i] = i;
		}
		else {
			nextLucky[i] = nextLucky[i + 1];
		}
	}
	while (N--) {
		LL x;
		cin >> x;
		if (isLucky[x]) {
			cout << "lucky" << endl;
		}
		else {
			cout << nextLucky[x] << endl;
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
