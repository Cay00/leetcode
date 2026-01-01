#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool hasSameDigits(string s) {
        string temp;
        while (s.size() > 2) {
            for (int i = 1; i < s.size(); i++) {
                int x = ((int)s[i - 1] - 48 + (int)s[i] - 48) % 10;
                temp.push_back(char(x + 48));
            }

            s = temp;
            temp = "";
        }
        if (s[0] == s[1])
            return true;
        else
            return false;
    }
};

int main() {
    Solution solution;

    return 0;
}