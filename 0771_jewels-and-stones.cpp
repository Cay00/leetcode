#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res = 0;
        for (char s : stones) {
            for (char j : jewels) {
                if (s == j) res++;
            }
        }
        return res;
    }
};

int main() {
    Solution solution;

    string jewels = "aA";
	string stones = "aAAbbbb";
    int ans = solution.numJewelsInStones(jewels, stones);

    cout << ans << endl;

    return 0;
}