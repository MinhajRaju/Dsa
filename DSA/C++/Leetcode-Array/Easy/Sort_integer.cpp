#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;


int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

bool compare(int a, int b) {
    int countA = countSetBits(a); 
    int countB = countSetBits(b); 
    
    
    if (countA == countB) {
        return a < b;
    }
    

    return countA < countB;
}

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};


int main() {
    Solution sol;
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    
    vector<int> sortedArr = sol.sortByBits(arr);
    
    cout << "Result: ";
    for(int num : sortedArr) {
        cout << num << " ";
    }
    return 0;
}