#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) {
        while (n % 2 != 0) {
            n += n;
        }

        return n;
    }
};

int main() {
    Solution solution;

    return 0;
}