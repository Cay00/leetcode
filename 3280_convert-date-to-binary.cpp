#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string convertDateToBinary(string date) {
        
        string y = toBinary(stoi(date.substr(0, 4)));
        string m = toBinary(stoi(date.substr(5, 7)));
        string d = toBinary(stoi(date.substr(8, 10)));

        string res = y + "-" + m + "-" + d;

		return res;
    }

    string toBinary(int n) {
        string res;
        if (n == 0) return "0";

        while (n > 0) {
            res = char('0' + (n % 2)) + res;
            n /= 2;
        }
        return res;
    }
};

int main() {
    Solution solution;

    string date = "2080-02-29";
    string ans = solution.convertDateToBinary(date);
    
    cout << ans << endl;

    return 0;
}