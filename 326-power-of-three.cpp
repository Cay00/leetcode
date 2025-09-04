#include <iostream>

using namespace std;

class Solution {
public:
	bool isPowerOfThree(int n) {

		if (n < 1) {
			return false;
		}
		while (n % 3 == 0) {
			n /= 3;
		}
		return n == 1;
	}
};

int main() {
	Solution solution;
	cout << solution.isPowerOfThree(27) << endl; // Output: true
	cout << solution.isPowerOfThree(0) << endl;  // Output: false
	cout << solution.isPowerOfThree(9) << endl;  // Output: true
	cout << solution.isPowerOfThree(-1) << endl; // Output: false
	return 0;
}
