#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numOfWays(int n) {
        long long ans;
        long long mod = 1e9 + 7;
        long long abc = 6; // always 6 possibilities in 1 row
        long long aba = 6;

        for (int i = 1; i < n; i++) {
            long long new_abc = (2 * aba + 2 * abc) % mod;
            long long new_aba = (3 * aba + 2 * abc) % mod;
            abc = new_abc;
            aba = new_aba;
        }

        ans = (abc + aba) % mod;
        return ans;
    }
};

int main() {
    Solution solution;

    return 0;
}