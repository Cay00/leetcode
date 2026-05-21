#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        int minDif = 1e9;

        sort(arr.begin(), arr.end());

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] < minDif) {
                minDif = arr[i] - arr[i - 1];
                ans.clear();
                ans.push_back({ arr[i - 1], arr[i] });
            }
            else if (arr[i] - arr[i - 1] == minDif) {
                ans.push_back({ arr[i - 1], arr[i] });
            }
        }

        return ans;
    }
};

int main() {
	//Solution solution;

	return 0;
}