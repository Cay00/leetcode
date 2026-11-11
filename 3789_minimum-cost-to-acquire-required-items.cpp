class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        int common = min(need1, need2);
        int remaining = max(need1, need2) - common;

        int remainingCost;

        if (need1 > need2) {
            remainingCost = cost1;
        }
        else {
            remainingCost = cost2;
        }

        long long total = (long long)common * min(costBoth, cost1 + cost2);
        total += (long long)remaining * min(costBoth, remainingCost);

        return total;
    }
};