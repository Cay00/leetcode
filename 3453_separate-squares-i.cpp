#include <iostream>
#include <vector>

using namespace std;

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        // squares[0][0] - x
        // squares[0][1] - y
        // squares[0][2] - a

        double totalArea = 0;
        double bottom = 2e9;
        double top = 0;

        for (auto& s : squares) {
            double y = s[1];
            double a = s[2];
            totalArea += a * a;
            bottom = min(bottom, y);
            top = max(top, y + a);
        }

        double targetArea = totalArea / 2.0;
        cout << bottom << " " << top << " " << targetArea << endl;

        for (int i = 0; i < 50; i++) {
            double mid = bottom + (top - bottom) / 2.0;
            double newArea = 0;

            for (auto& s : squares) {
                double y = s[1];
                double a = s[2];
                double hBottom = max(0.0, min(mid - y, a));
                newArea += hBottom * a;
            }

            if (newArea >= targetArea) {
                top = mid;
            }
            else
                bottom = mid;
        }

        return bottom;
    }
};

int main() {
	//Solution solution;

	return 0;
}