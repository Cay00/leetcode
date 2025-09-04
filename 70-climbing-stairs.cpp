#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int climbStairs(int n) {
        if (n == 1) return 1;
        int a = 1;
        int b = 2;
        for (int i = 3; i <= n; ++i) {
            int c = a + b;
            a = b;
            b = c;
        }
        return b;
	}
};

int main() {
	Solution solution;
	cout << solution.climbStairs(2) << endl;   // 2
	cout << solution.climbStairs(3) << endl;   // 3
}
