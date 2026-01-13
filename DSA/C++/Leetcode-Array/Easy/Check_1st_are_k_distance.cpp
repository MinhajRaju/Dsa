#include <iostream>
#include <vector>

using namespace std;


bool kLengthApart(vector<int>& nums, int k) {
    int last_pos = -1; 

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
         
            if (last_pos != -1 && (i - last_pos - 1) < k) {
                return false;
            }
           
            last_pos = i;
        }
    }
    return true;
}

int main() {
   
    vector<int> nums1 = {1, 0, 0, 0, 1, 0, 0, 1};
    int k1 = 2;

    cout << "Test Case 1: ";
    if (kLengthApart(nums1, k1)) {
        cout << "True " << endl;
    } else {
        cout << "False " << endl;
    }

   
    vector<int> nums2 = {1, 0, 0, 1, 0, 1}; 
    int k2 = 2;

    cout << "Test Case 2: ";
    if (kLengthApart(nums2, k2)) {
        cout << "True " << endl;
    } else {
        cout << "False " << endl;
    }

    return 0;
}