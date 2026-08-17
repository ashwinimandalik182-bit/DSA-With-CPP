#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long long power = n;

        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        double ans = 1.0;

        while (power > 0) {
            if (power % 2 == 1) {
                ans *= x;
            }

            x *= x;
            power /= 2;
        }

        return ans;
    }
};

int main() {
    Solution s;

    double x = 2;
    int n = 10;

    cout << s.myPow(x, n) << endl;

    return 0;
}
