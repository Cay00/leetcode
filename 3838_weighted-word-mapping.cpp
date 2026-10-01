class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string x;

        for (int i = 0; i < words.size(); i++) {
            int score = 0;
            for (int j = 0; j < words[i].size(); j++) {
                score += weights[words[i][j] - 'a'];
            }
            score %= 26;

            x += char('a' + 25 - score);
        }

        return x;
    }
};