#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s = word1.size() + word2.size();
        string ans;

        int w1 = 0;
        int w2 = 0;
        for (int i = 0; i < s; i++) {
            if (w1 < word1.size()) {
                ans.push_back(word1[w1]);
                w1++;
            }
            if (w2 < word2.size()) {
                ans.push_back(word2[w2]);
                w2++;
            }
        }
        return ans;
    }
};

int main() {
	//Solution solution;

	return 0;
}