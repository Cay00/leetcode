#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	string convertToTitle(int columnNumber) {
		if (columnNumber > 26) {
			int mod = columnNumber % 26;
			if (mod == 0) {
				mod = 26;
				columnNumber -= 1;
			}

			return convertToTitle(columnNumber / 26) + (char)('A' + mod - 1);
		}
		else {
			return string(1, (char)('A' + columnNumber - 1));
		}
	}
};

int main() {
	Solution solution;
	cout << solution.convertToTitle(1) << endl;   // A
	cout << solution.convertToTitle(26) << endl;   // Z
	cout << solution.convertToTitle(28) << endl;   // AB
	cout << solution.convertToTitle(52) << endl;   // AZ
	cout << solution.convertToTitle(701) << endl;  // ZY
}
