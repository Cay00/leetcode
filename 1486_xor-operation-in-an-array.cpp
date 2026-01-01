#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int res = 0;

        for (int i = 0; i < n; i++) {
            int num = start + 2 * i;
            res = res ^ num;
        }
        return res;
    }
};

int main() {
    Solution solution;

    return 0;
}