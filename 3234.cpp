#include <iostream>
#include <vector>

using namespace std;

// time esceeded 

class Solution {
public:
	int numberOfSubstrings(string s) {
		int n = s.size();
		int res = 0;

		for (int i = 0; i < n; i++) {
			int zero = 0;
			int one = 0;
			for (int j = i; j < n; j++) {
				if (s[j] == '0') {
					zero++;
					if (zero >= 200) break;
				}
				else {
					one++;
					if (one >= 39801) {
						res++;
						break;
					}
				}

				if (one >= zero * zero) {
					res++;
				}
			}
			
		}
		return res;
	}
};


int main() {
	Solution solution;

	string s = "00011";
	int ans = solution.numberOfSubstrings(s);
	cout << ans << endl;

	return 0;
}