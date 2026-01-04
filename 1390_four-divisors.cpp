#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int sumFourDivisors(vector<int>& nums) {
		int ans = 0;

		for (int num : nums) {
			int div = 0;
			int divSum = 0;

			for (int i = 1; i * i <= num; i++) {
				if (num % i == 0) {
					int other = num / i;
					if (i != other) {
						div += 2;
						divSum += i + other;
					}
					else {
						div++;
						divSum += i;
					}

					if (div > 4)
						break;
				}
			}
			if (div == 4)
				ans += divSum;
		}
		return ans;
	}
};

int main() {
	Solution solution;

	return 0;
}