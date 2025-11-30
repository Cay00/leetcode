#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int findClosest(int x, int y, int z) {
		int res;
		if (abs(z - x) > abs(z - y)) res = 2;
		else if (abs(z - x) == abs(z - y)) res = 0;
		else res = 1;

		return res;
	}
};


int main() {
	Solution solution;

	int x = 2, y = 7, z = 4;
	int ans = solution.findClosest(x,y,z);
	cout << ans << endl;

	x = 2, y = 5, z = 6;
	ans = solution.findClosest(x, y, z);
	cout << ans << endl;

	x = 1, y = 5, z = 3;
	ans = solution.findClosest(x, y, z);
	cout << ans << endl;

	return 0;
}