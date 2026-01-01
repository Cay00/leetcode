#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int totalMoney(int n) {
        int res = 0;
        if (n <= 7) {
            for (int i = 1; i <= n; i++)
                res += i;
        }
        else {
            int weeks = n / 7;
            for (int i = 1; i <= weeks; i++) {
                res += 28 + (i - 1) * 7;
            }
            for (int i = 1; i <= n - (weeks * 7); i++) {
                res += i + weeks;
            }
        }
        return res;
    }
};

int main() {
    Solution solution;

    return 0;
}