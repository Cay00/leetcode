#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            while (left < right && vowels.find(s[left]) == string::npos)
                left++;
            while (left < right && vowels.find(s[right]) == string::npos)
                right--;

            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};

//class Solution {
//public:
//    string reverseVowels(string s) {
//        string vowels = "aeiouAEIOU";
//        string vow;
//
//        for (char c : s) {
//            for (char v : vowels) {
//                if (c == v) {
//                    vow.push_back(c);
//                    break;
//                }
//            }
//        }
//
//        for (int i = 0; i < s.size(); i++) {
//            for (char v : vowels) {
//                if (s[i] == v) {
//                    s[i] = vow.back();
//                    vow.pop_back();
//                    break;
//                }
//            }
//        }
//
//        return s;
//    }
//};

int main() {
	//Solution solution;

	return 0;
}