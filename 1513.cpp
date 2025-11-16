#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int numSub(string s) {
		int res = 0;
		int temp = 0;
		int mod = 1e9 + 7;


		for (char c : s) {
			if (c == '1') {
				temp++;
			}
			else {
				temp = 0;
			}
			res = (res + temp) % mod;
		}

		return res;
	}
};


int main() {
	Solution solution;

	string s = "0110111";
	int ans = solution.numSub(s);
	cout << ans << endl;

	return 0;
}