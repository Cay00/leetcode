class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = 99999;

        for (int n : nums) {
            int x = 0;

            while (n > 0) {
                x += n % 10;
                n /= 10;
            }
            if (x < ans)
                ans = x;
        }

        return ans;
    }
};