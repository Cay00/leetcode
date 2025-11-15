#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int theMaximumAchievableX(int num, int t) {
		int x = num + t * 2;
		cout << x << endl;
		return x;
	}
};

int main() {
	Solution solution;
	int num;
	int t;

	cin >> num >> t;
	int x =  solution.theMaximumAchievableX(num, t);
	cout << x << endl;
	return 0;
}