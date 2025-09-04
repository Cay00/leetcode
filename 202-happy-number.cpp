#include <iostream>

using namespace std;

class Solution {
public:
	bool isHappy(int n) {
		int sum = 0;

		while (n > 0) {
			sum += (n % 10) * (n % 10);
			n /= 10;
		}

		if (sum >= 10) {
			return isHappy(sum);
		}

		if (sum == 7 || sum == 1) {
			return 1;
		}
		return sum == 1;
	}
};

int main() {
	Solution solution;
	cout << solution.isHappy(1111111) << endl; // Output: true
	//cout << solution.isHappy(2) << endl;  // Output: false
	return 0;
}
