#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                brackets.push(c);
            }
            else {
                if (brackets.empty())
                    return false;
                if ((c == ')' && brackets.top() != '(') ||
                    (c == '}' && brackets.top() != '{') ||
                    (c == ']' && brackets.top() != '['))
                    return false;
                brackets.pop();
            }
        }
        return brackets.empty();
    }
};

int main() {
	//Solution solution;

	return 0;
}