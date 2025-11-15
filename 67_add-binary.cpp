#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	string addBinary(string a, string b) {
		string result = "";
		int carry = 0;
		int i = a.length() - 1;
		int j = b.length() - 1;

		while (i >= 0 || j >= 0 || carry) {
			int sum = carry;
			if (i >= 0) sum += a[i--] - '0';
			if (j >= 0) sum += b[j--] - '0';

			result.push_back((sum % 2) + '0');
			carry = sum / 2;
		}

		reverse(result.begin(), result.end());
		return result;
	}
};

int main() {
	Solution solution;
	cout << solution.addBinary("11", "1") << endl;   // 100
	cout << solution.addBinary("11", "10") << endl;  // 101
	cout << solution.addBinary("10", "10") << endl;  // 100
}