// C - Rotatable Array.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
// C - Rotatable Array.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <bits/stdc++.h>
using namespace std;
int n, q, qu[3000005], ipp, indexxx = 1;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> q;
	for (int i = 1; i <= n; i++) {
		qu[i] = i;
	}
	for (int i = 1; i <= q; i++) {
		int tmp;
		cin >> tmp;
		if (tmp == 1) {
			int p, x;
			cin >> p >> x;
			int j = (indexxx + p - 1) % n == 0 ? n : (indexxx + p - 1) % n;
			qu[j] = x;
		}
		else if (tmp == 2) {
			int p;
			cin >> p;
			int j = (indexxx + p - 1) % n == 0 ? n : (indexxx + p - 1) % n;
			cout << qu[j] << endl;
		}
		else {
			int k;
			cin >> k;
			indexxx = (indexxx + k) % n == 0 ? n : (indexxx + k) % n;
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


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
