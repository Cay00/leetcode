#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> letters(26,0);

        for (char c : s) {
            letters[c - 'a']++;
        }

        int vMax = 0;
        int cMax = 0;

        for (int i = 0; i < letters.size();i++) {
            if (i == int('a' - 'a') || i == int('e' - 'a') || i == int('i' - 'a') || i == int('o' - 'a') || i == int('u' - 'a')) {
                if (letters[i] > vMax) {
                    vMax = letters[i];
                }
            }
            else { 
                if (letters[i] > cMax) {
                    cMax = letters[i];
                }
            }
        }

        return vMax + cMax;
    }
};

int main() {
    Solution solution;

    string s = "asuccesses";    
    int ans = solution.maxFreqSum(s);

    cout << ans << endl;
    return 0;
}