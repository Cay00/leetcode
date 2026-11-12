class Solution {
public:
    int digitFrequencyScore(int n) {
        int ans = 0;

        while (n > 0) {
            int digit = n % 10;
            n /= 10;
            ans += digit;
        }

        return ans;
    }
};