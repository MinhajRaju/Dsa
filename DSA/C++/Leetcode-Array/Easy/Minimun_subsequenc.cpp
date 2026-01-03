#include <iostream>
#include <vector>
#include <algorithm> // sort এর জন্য
#include <numeric>   // accumulate (sum) এর জন্য

using namespace std;

// এই ফাংশনটি সমস্যা সমাধান করবে
vector<int> findMinSubsequence(vector<int>& nums) {
    // ১. মোট যোগফল বের করা
    int totalSum = accumulate(nums.begin(), nums.end(), 0);

    // ২. বড় থেকে ছোট সাজানো (Descending Sort)
    sort(nums.begin(), nums.end(), greater<int>());

    vector<int> result;
    int currentSum = 0;

    // ৩. লুপ চালিয়ে চেক করা
    for (int num : nums) {
        currentSum += num;
        result.push_back(num);

        // শর্ত: বর্তমান যোগফল কি বাকি অংশের চেয়ে বড়?
        if (currentSum > (totalSum - currentSum)) {
            break; // লুপ ব্রেক
        }
    }
    return result;
}

int main() {
    // ইনপুট নেওয়ার উদাহরণ
    vector<int> nums = {4, 3, 10, 9, 8};

    // ফাংশন কল করা
    vector<int> answer = findMinSubsequence(nums);

    // আউটপুট প্রিন্ট করা
    cout << "Result: ";
    for (int x : answer) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}