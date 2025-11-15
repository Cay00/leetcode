#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int romanToInt(string input) {
		int integer = 0;

		for (int i = 0; i < input.length(); i++) {
			switch (input[i]) {
			case 'I':
				if (i + 1 < input.length()) {
					if (input[i + 1] == 'V') {
						integer += 4;
						i++;
						continue;
					}
					else if (input[i + 1] == 'X') {
						integer += 9;
						i++;
						continue;
					}
				}
				integer += 1;
				break;
			case 'V':
				integer += 5;
				break;
			case 'X':
				if (i + 1 < input.length()) {
					if (input[i + 1] == 'L') {
						integer += 40;
						i++;
						continue;
					}
					else if (input[i + 1] == 'C') {
						integer += 90;
						i++;
						continue;
					}
				}
				integer += 10;
				break;
			case 'L':
				integer += 50;
				break;
			case 'C':
				if (i + 1 < input.length()) {
					if (input[i + 1] == 'D') {
						integer += 400;
						i++;
						continue;
					}
					else if (input[i + 1] == 'M') {
						integer += 900;
						i++;
						continue;
					}
				}
				integer += 100;
				break;
			case 'D':
				integer += 500;
				break;
			case 'M':
				integer += 1000;
				break;
			default:
				return -1;
			}
		}

		return integer;
	}
};

int main() {
	Solution solution;
	string number;

	cin >> number;
	cout << solution.romanToInt(number) << endl;
}