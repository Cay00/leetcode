#include <iostream>

using namespace std;

class Solution {
public:
	int titleToNumber(string columnTitle) {
		int result = 0;
		for (int i = 0; i < columnTitle.length(); i++) {
			result += (columnTitle[i] - 'A' + 1) * pow(26, columnTitle.length() - i - 1);
		}
		return result;
	}
};

int main() {
	Solution solution;
	cout << solution.titleToNumber("A") << endl; // 1
	cout << solution.titleToNumber("AB") << endl; // 28
	cout << solution.titleToNumber("ZY") << endl; // 701
	cout << solution.titleToNumber("AAA") << endl; // 703
}
