#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int smallestNumber(int n) {
        int x = 2;
        while (x < n) {
            x *= 2;
        }
        int res = x;
        if (res - 1 < n) res = res * 2 - 1;
        else res = x - 1;

        return res;
    }
};

int main() {
    Solution solution;

    return 0;
}