#include <iostream>

using namespace std;

class Solution {
public:
	bool isPowerOfFour(int n) {

		if (n < 1) {
			return false;
		}
		while (n % 4 == 0) {
			n /= 4;
		}
		return n == 1;
	}
};

int main() {
	Solution solution;
	cout << solution.isPowerOfFour(16) << endl; // Output: true
	cout << solution.isPowerOfFour(5) << endl;  // Output: false
	cout << solution.isPowerOfFour(1) << endl;  // Output: true
	return 0;
}
