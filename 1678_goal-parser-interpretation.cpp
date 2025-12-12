#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string interpret(string command) {
        string ans;

        for (int i = 0; i < command.size(); i++) {
            if (command[i] == '(') {
                if (command[i + 1] == 'a') {
                    ans.append("al");
                    i += 3;
                }
                else if (command[i + 1] == ')') {
                    ans.push_back('o');
                    i += 1;
                }
            }
            else {
                ans.push_back(command[i]);
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;

    return 0;
}