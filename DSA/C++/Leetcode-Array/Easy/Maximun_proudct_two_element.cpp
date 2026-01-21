#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {3, 4, 5, 2};

    int max1 = 0, max2 = 0;

    // Find the largest and second largest numbers
    for (int x : nums) {
        if (x > max1) {
            max2 = max1;
            max1 = x;
        } else if (x > max2) {
            max2 = x;
        }
    }

    int result = (max1 - 1) * (max2 - 1);

    cout << "Maximum Product = " << result << endl;

    return 0;
}
