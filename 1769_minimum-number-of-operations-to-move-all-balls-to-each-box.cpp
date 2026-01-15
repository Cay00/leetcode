#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.size(), 0);

        int count = 0, moves = 0;
        for (int i = 0; i < boxes.size(); i++) {
            if (boxes[i] == '1')
                count++;
            ans[i] += moves;
            moves += count;
        }

        count = 0, moves = 0;
        for (int i = boxes.size() - 1; i >= 0; i--) {
            if (boxes[i] == '1')
                count++;
            ans[i] += moves;
            moves += count;
        }

        return ans;
    }
};

int main() {
	Solution solution;

	return 0;
}