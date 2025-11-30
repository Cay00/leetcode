#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int ans = 0;
        int sum = 0;

        int min1a = 1e7, min1b = 1e7;
        int min2a = 1e7, min2b = 1e7;

        for (int num : nums) {
            sum += num;
            if (num % 3 == 1) {
                if (num < min1a) {
                    min1b = min1a;
                    min1a = num;
                }
                else if (num < min1b) {
                    min1b = num;
                }
            }
            if (num % 3 == 2) {
                if (num < min2a) {
                    min2b = min2a;
                    min2a = num;
                }
                else if (num < min2b) {
                    min2b = num;
                }
            }
        }

        //cout << min1a << " " << min1b << endl;
        //cout << min2a << " " << min2b << endl;


        if (sum % 3 == 1) {
            ans = max(ans, sum - min1a);
            if (min2b < 1e7) {
                ans = max(ans, sum - min2a - min2b);
            }
        }
        else if (sum % 3 == 2) {
            ans = max(ans, sum - min2a);
            if (min1b < 1e7) {
                ans = max(ans, sum - min1a - min1b);
            }
        }
        else {
            ans = sum;
        }

        return ans;
    }
};

int main() {
    Solution solution;

    vector<int> nums = { 1,3,5,6,8 };

    int ans = solution.maxSumDivThree(nums);
    cout << ans << endl;

    return 0;
}