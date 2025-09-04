#include <iostream>

using namespace std;

class Solution {
public:
	int addDigits(int num) {
		int sum = 0;

		while (num > 0) {
			sum += num % 10;
			num /= 10;
		}

		if (sum >= 10) {
			return addDigits(sum);
		}
		return sum;
	}
};

int main() {
	Solution solution;
	cout << solution.addDigits(38) << endl; // Output: 2
}
