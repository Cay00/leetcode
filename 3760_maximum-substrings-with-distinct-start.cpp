#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxDistinct(string s) {
        int ans = 0;
        unordered_map<char, int> letters;

        for (char letter : s) {
            letters[letter - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (letters[i] > 0)
                ans++;
        }

        return ans;
    }
};

int main() {
	Solution solution;

	return 0;
}