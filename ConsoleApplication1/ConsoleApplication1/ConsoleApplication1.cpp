#include <iostream>

using namespace std;

class Solution {
public:
	bool isPowerOfTwo(int n) {

		if (n < 2) {
			return true;
		}
		else {
			while (n > 2) {
				if (n % 2 == 1) {
					return false;
				}
				n /= 2;
			}
			return true;
		}
	}
};

int main() {
	Solution solution;
	cout << solution.isPowerOfTwo(1) << endl; // true
	cout << solution.isPowerOfTwo(16) << endl; // true
	cout << solution.isPowerOfTwo(3) << endl; // false
	return 0;
}
