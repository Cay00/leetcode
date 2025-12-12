#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countCollisions(string directions) {
        int ans = 0;
        int movingR = 0;
        bool stop = false;

        for (char move : directions) {
            if (move == 'L') {
                if (movingR > 0) {
                    ans += movingR + 1;
                    movingR = 0;
                    stop = true;
                }
                else if (stop == true) {
                    ans++;
                }
            }
            else if (move == 'R') {
                movingR++;
            }
            else if (move == 'S') {
                ans += movingR;
                movingR = 0;
                stop = true;
            }
        }

        return ans;
    }
};

int main() {
    Solution solution;

    return 0;
}