#include <iostream> 
#include <vector> 
#include <unordered_map>
using namespace std;

int main() {
    vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};
    unordered_map<int, int> freq;

    for (int num : nums) {
        freq[num]++;
    }

    int max_len = 0;

    for (auto p : freq) {
        int num = p.first;

        // freq.count() না ব্যবহার করে check
        if (freq.find(num + 1) != freq.end()) {
            int len = freq[num] + freq[num + 1];
            if (len > max_len) {
                max_len = len;
            }
        }
    }

    cout << max_len << endl;


}

/*
Step by step iterations:

num = 1

Check 1+1=2 in freq → আছে

len = freq[1]+freq[2] = 1+3 = 4

max_len = max(0,4) = 4

num = 3

Check 3+1=4 in freq → নেই → skip

num = 2

Check 2+1=3 in freq → আছে

len = freq[2]+freq[3] = 3+2 = 5

max_len = max(4,5) = 5

num = 5

Check 5+1=6 in freq → নেই → skip

num = 7

Check 7+1=8 in freq → নেই → skip


*/