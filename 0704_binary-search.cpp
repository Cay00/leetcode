class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;

        while (l <= r) {
            int centre = l + (r - l) / 2;

            if (nums[centre] == target) {
                return centre;
            }

            if (nums[centre] > target) {
                r = centre - 1;
            }
            else {
                l = centre + 1;
            }
        }

        return -1;
    }
};