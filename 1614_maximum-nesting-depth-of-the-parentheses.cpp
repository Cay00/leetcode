class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int max = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                depth++;
                if (depth > max) max = depth;
            }
            else if (s[i] == ')') {
                depth--;
            }
        }

        return max;
    }
};