#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
	int differenceOfSums(int n, int m) {
		int num1 = 0;
		int num2 = 0;
		for (int i = 1; i <= n; i++) {
			if (i % m != 0) {
				num1 += i;
			}
			if (i % m == 0) {
				num2 += i;
			}
		}
		return num1 - num2;

	}
};

int main() {
	Solution solution;
	int n;
	int m;

	cin >> n >> m;
	int x = solution.differenceOfSums(n, m);
	//cout << x << endl;
	return x;
}