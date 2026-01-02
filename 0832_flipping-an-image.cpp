#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> def = image;
        int x = image.size();
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < x; j++) {
                def[i][x - j - 1] = image[i][j];
                if (def[i][x - j - 1] == 0)
                    def[i][x - j - 1] = 1;
                else
                    def[i][x - j - 1] = 0;
            }
        }

        return def;
    }
};

int main() {
    Solution solution;

    return 0;
}