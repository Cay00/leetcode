#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        bool ans = true;

        for (int i = 2; i <= n - 2; i++) {
            string rep;
            int x = n;
            while (x > 0) {
                rep = to_string(x % i) + rep;
                x /= i;
            }

            for (int k = 0; k < rep.size() / 2; k++) {
                if (rep[k] != rep[rep.size() - 1 - k]) {
                    return false;
                }
            }
        }

        return ans;
    }
};

int main() {
	Solution solution;

	return 0;
}