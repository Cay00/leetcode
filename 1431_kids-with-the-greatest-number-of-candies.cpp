#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatest = 0;
        for (int c : candies) {
            if (c > greatest)
                greatest = c;
        }

        vector<bool> ans;

        for (int c : candies) {
            if (c + extraCandies >= greatest)
                ans.push_back(1);
            else
                ans.push_back(0);
        }
        return ans;
    }
};

int main() {
    Solution solution;

    return 0;
}