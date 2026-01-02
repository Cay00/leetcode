#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> decode;
        char letter = 'a';

        for (char c : key) {
            if (c != ' ') {
                if (decode.find(c) == decode.end()) {
                    decode[c] = letter;
                    letter++;
                }
            }
        }

        string res = "";
        for (char c : message) {
            if (c == ' ') res += ' ';
            else res += decode[c];
        }

        return res;
    }
};

int main() {
    Solution solution;

    return 0;
}