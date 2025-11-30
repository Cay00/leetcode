#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
		vector<int> answer;
		for (int i : order) {
			for (int j : friends) {
				if (i == j) {
					answer.push_back(i);
				}
			}
		}
		return answer;
	}
};


int main() {
	Solution solution;
	
	vector<int> order = { 3, 1, 2, 5, 4 };
	vector<int> friends = { 1, 3, 4 };

	vector<int> answer = solution.recoverOrder(order, friends);

	for (int num : answer) {
		cout << num << " ";
	}

	return 0;
}