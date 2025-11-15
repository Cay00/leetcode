#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
	int scoreOfString(string s) {
		int sum = 0;
		for (int i = 0; i < s.length() - 1; i++) {

			sum += abs(int(s[i]) - int(s[i + 1]));
		}
		return sum;
	}
};

int main() {
	Solution solution;
	string s;

	cin >> s;
	int x = solution.scoreOfString(s);
	//cout << x << endl;
	return x;
}