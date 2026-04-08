#include <iostream>
#include <vector>
#include <algorithm> // max function এর জন্য

using namespace std;

class Solution {
public:
    int getMaximumGenerated(int n) {
        // বেস কেস: n যদি ০ হয় তবে রেজাল্ট ০
        if (n == 0) return 0;
        // n যদি ১ হয় তবে রেজাল্ট ১
        if (n == 1) return 1;

        // n+1 সাইজের একটি ভেক্টর বা অ্যারে তৈরি করি
        vector<int> nums(n + 1);
        
        nums[0] = 0;
        nums[1] = 1;
        
        int maxVal = 1; // শুরুতে ম্যাক্সিমাম ১ ধরি যেহেতু n >= 1

        // লুপটি n/2 পর্যন্ত গেলেই সব ইনডেক্স কাভার হয়ে যাবে
        for (int i = 1; i <= n / 2; i++) {
            // জোড় ইনডেক্সের জন্য রুল: nums[2*i] = nums[i]
            if (2 * i <= n) {
                nums[2 * i] = nums[i];
                maxVal = max(maxVal, nums[2 * i]);
            }
            
            // বিজোড় ইনডেক্সের জন্য রুল: nums[2*i+1] = nums[i] + nums[i+1]
            if (2 * i + 1 <= n) {
                nums[2 * i + 1] = nums[i] + nums[i + 1];
                maxVal = max(maxVal, nums[2 * i + 1]);
            }
        }

        return maxVal;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    int result = sol.getMaximumGenerated(n);
    cout << "Maximum value in the generated array: " << result << endl;
    
    return 0;
}