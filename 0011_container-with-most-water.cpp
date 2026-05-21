#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;

        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            int l = right - left;
            int h = min(height[left], height[right]);
            ans = max(ans, l * h);

            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return ans;
    }
};

int main() {
	//Solution solution;

	return 0;
}