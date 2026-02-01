#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4};

    // Running sum logic
    for (int i = 1; i < nums.size(); i++) {
        nums[i] = nums[i] + nums[i - 1];
    }

    // Print result
    cout << "Running Sum Array: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}