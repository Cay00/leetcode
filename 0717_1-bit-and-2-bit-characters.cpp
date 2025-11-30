#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        bool res = false;

		if (bits.size() == 1 && bits[0] == 0) return true;
        else {
            for (int i = 0; i < bits.size();i++) {
                if (i == bits.size() - 1) {
                    if (bits[i] == 0) {
                        res = true;
                        break;
                    }
                }
                else {
                    if (bits[i] == 1) {
                        i += 1;
                    }
                }
            }
        }
		return res;
    }
};

int main() {
    Solution solution;

    vector<int> bits = { 0,0 };
    bool ans = solution.isOneBitCharacter(bits);
    
    cout << ans << endl;

    return 0;
}