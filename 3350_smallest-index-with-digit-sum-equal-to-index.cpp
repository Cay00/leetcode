class Solution {
public:
    int smallestIndex(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;

            while (nums[i] > 0) {
                int x = nums[i] % 10;
                sum += x;
                nums[i] /= 10;
            }

            if (sum == i) {
                return sum;
            }
        }

        return -1;
    }
};