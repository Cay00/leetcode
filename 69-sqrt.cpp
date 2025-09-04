#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int mySqrt(int x) {
		return (int)sqrt(x);
	}
};

int main() {
	Solution solution;
	int number;
	cin >> number;
	cout << solution.mySqrt(number) << endl;
}