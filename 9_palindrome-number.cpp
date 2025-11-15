#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0) return false;
		int original = x;
		int reversed = 0;
		while (x > 0) {
			int digit = x % 10;
			if (reversed > (numeric_limits<int>::max() - digit) / 10)
				return false;
			reversed = reversed * 10 + digit;
			x /= 10;
		}
		return original == reversed;
	}
};

int main() {
	Solution solution;
	int number;

	cin >> number;
	if (solution.isPalindrome(number))
		cout << "true" << endl;
	else
		cout << "false" << endl;
}