#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = { ".-",   "-...", "-.-.", "-..",  ".",    "..-.",
                                "--.",  "....", "..",   ".---", "-.-",  ".-..",
                                "--",   "-.",   "---",  ".--.", "--.-", ".-.",
                                "...",  "-",    "..-",  "...-", ".--",  "-..-",
                                "-.--", "--.." };
        vector<string> out;

        for (string word : words) {
            string temp;
            for (char c : word) {
                temp.append(morse[c - 'a']);
            }
            out.push_back(temp);
        }
        sort(out.begin(), out.end());

        int res = 0;
        if (out.size() < 2)
            res = 1;
        else {
            for (int i = 1; i < out.size(); i++) {
                if (i == 1 && out[i] == out[i - 1])
                    res++;
                else if (i == 1 && out[i] != out[i - 1])
                    res += 2;
                else if (out[i] != out[i - 1])
                    res++;
            }
        }
        return res;
    }
};

int main() {
    Solution solution;

    return 0;
}