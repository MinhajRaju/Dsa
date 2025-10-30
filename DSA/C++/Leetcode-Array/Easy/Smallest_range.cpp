#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 3, 6};
    int k = 3;

    int maxVal = *max_element(nums.begin(), nums.end());
    int minVal = *min_element(nums.begin(), nums.end());

    
    int score = max(0, (maxVal - minVal) - 2 * k);

    cout << "Minimum possible score = " << score << endl;
    return 0;
}