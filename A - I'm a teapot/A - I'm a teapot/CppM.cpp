#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n;
string s;
int main() {
	cin >> n >> s;
	if(n < 3) {
		cout << "No";
		return 0;
	}
	if (s[n - 3] == 't' && s[n - 2] == 'e' && s[n - 1] == 'a') {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/