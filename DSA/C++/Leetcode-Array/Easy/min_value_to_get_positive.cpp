#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minStartValue(vector<int>& nums) {
    int total = 0;
    int minSum = 0;

    for (int n : nums) {
        total += n;
        minSum = min(minSum, total);
    }

    return 1 - minSum;
}

int main() {
    vector<int> nums = {-3, 2, -3, 4, 2};

    int result = minStartValue(nums);
    cout << "Minimum start value: " << result << endl;

    return 0;
}
