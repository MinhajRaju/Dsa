#include <bits/stdc++.h>
using namespace std;

vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
    int sumA = accumulate(A.begin(), A.end(), 0);
    int sumB = accumulate(B.begin(), B.end(), 0);

 
    int diff = (sumB - sumA) / 2;

   
    unordered_set<int> setB(B.begin(), B.end());

  
    for (int x : A) {
        int y = x + diff;  
        if (setB.count(y)) {
            return {x, y}; 
        }
    }

    return {}; 
}

int main() {
    vector<int> A = {1, 2};
    vector<int> B = {2, 3};

    vector<int> ans = fairCandySwap(A, B);

    cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;

    return 0;
}
