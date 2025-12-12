#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int val = 0;
        ListNode* cur = head;

        while (cur != nullptr) {
            val = val * 2 + cur->val;
            cur = cur->next;
        }

        return val;
    }
};

int main() {
    Solution solution;

    return 0;
}