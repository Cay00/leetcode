#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int finalValueAfterOperations(vector<string>& operations) {
		int x = 0;

		for (string operation : operations) {
			if (operation == "++X" || operation == "X++") {
				x += 1;
			}
			else if (operation == "--X" || operation == "X--") {
			
				x -= 1;
			}
		}

		return x;
	}
};


int main() {
	Solution solution;
	
	vector<string> operations = { "--X","X++","X++" };

	int answer = solution.finalValueAfterOperations(operations);

	cout << answer << endl;

	return 0;
}