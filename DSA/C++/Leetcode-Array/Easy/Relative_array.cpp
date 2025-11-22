#include <bits/stdc++.h>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    unordered_map<int, int> freq;

    // Step 1: frequency map বানানো
    for (int x : arr1) {
        freq[x]++;
    }

    vector<int> result;

    // Step 2: arr2 অনুযায়ী fill করা
    for (int x : arr2) {
        if (freq.count(x)) {
            while (freq[x] > 0) {
                result.push_back(x);
                freq[x]--;
            }
            freq.erase(x);  // কাজ শেষ, map থেকে সরিয়ে দাও
        }
    }
    //
    
    vector<int> leftover;
    for (auto &p : freq) {
        while (p.second--) {
            leftover.push_back(p.first);
        }
    }

    
    sort(leftover.begin(), leftover.end());

    
    for (int x : leftover) 
        result.push_back(x);

    return result;
}

int main() {
    vector<int> arr1 = {2,3,2,1};
    vector<int> arr2 = {2,1};

    vector<int> res = relativeSortArray(arr1, arr2);

    for (int x : res) {
        cout << x << " ";
    }
}
