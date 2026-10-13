#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int revNum = 0;

        while (x != 0) {
            int ld = x % 10;

            // Check overflow
            if (revNum > INT_MAX / 10 || revNum < INT_MIN / 10) {
                return 0;
            }

            revNum = (revNum * 10) + ld;
            x = x / 10;
        }

        return revNum;
    }
};

int main() {
    Solution obj;

    int x;
    cout << "Enter an integer: ";
    cin >> x;

    int result = obj.reverse(x);

    cout << "Reversed number: " << result << endl;

    return 0;
}