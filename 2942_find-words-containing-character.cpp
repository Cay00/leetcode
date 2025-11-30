#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> findWordsContaining(vector<string>& words, char x) {
		vector<int> answer;

		for (int i = 0; i < words.size(); i++) {
			for (char c : words[i]) {
				if (c == x) {
					answer.push_back(i);
					break;
				}
			}
		}
		return answer;
	}
};


int main() {
	Solution solution;

	vector<string> words = { "abc","bcd","aaaa","cbc" };
	char x = 'a';

	vector<int> answer = solution.findWordsContaining(words, x);

	for (int num : answer) {
		cout << num << " ";
	}

	return 0;
}