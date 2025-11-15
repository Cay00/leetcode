#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	string defangIPaddr(string address) {
		string ans;
		for (char c : address) {
			if (c == '.') {
				ans += "[.]";
			}
			else {
				ans += c;
			}
		}
	
		return ans;
	}
};


int main() {
	Solution solution;

	string address = "1.1.1.1";

	string ans = solution.defangIPaddr(address);

	cout << ans << endl;

	return 0;
}