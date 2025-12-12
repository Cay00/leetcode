#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numberOfMatches(int n) {
        int ans = 0;

        if (n == 1) ans = 0;
        else if (n == 2) ans = 1;
        else {
            while (n > 1) {
                int x = 0;
                if (n % 2 == 0) {
                    ans += n / 2;
                    n /= 2;
                }
                else {
                    ans += (n - 1) / 2;
                    n = (n - 1) / 2 + 1;
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