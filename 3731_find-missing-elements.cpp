class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;

        sort(nums.begin(), nums.end());

        if (nums[nums.size() - 1] - nums[0] + 1 == nums.size()) {
            return ans;
        } else {
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] - nums[i - 1] != 1) {
                    for (int j = 1; j < nums[i] - nums[i - 1]; j++) {
                        ans.push_back(nums[i - 1] + j);
                    }
                }
            }
        }

        return ans;
    }
};