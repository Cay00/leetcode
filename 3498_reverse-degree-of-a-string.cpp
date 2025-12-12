#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            int x = abs(int(s[i] - 'a') - 26);
            sum += x * (i + 1);
        }

        return sum;
    }
};
int main() {
    Solution solution;

    return 0;
}