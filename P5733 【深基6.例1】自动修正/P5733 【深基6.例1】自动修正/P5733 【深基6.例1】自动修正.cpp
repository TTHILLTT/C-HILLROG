#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
string s;
int main() {
	cin >> s;
	for (char i : s) {
		if (i <= 'z' && i >= 'a') {
			i -= 32;
		}
		cout << i;
	}
	return 0;
}