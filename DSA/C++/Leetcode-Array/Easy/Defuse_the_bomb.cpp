#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> decrypt(vector<int>& code, int k) {
    int n = code.size();
    vector<int> result(n, 0);

    if (k == 0) return result;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        if (k > 0) {
            for (int j = 1; j <= k; j++) {
                int nextIndex = (i + j) % n;
                sum += code[nextIndex];
            }
        } 
        else {
            for (int j = 1; j <= abs(k); j++) {
                int prevIndex = (i - j + n) % n;
                sum += code[prevIndex];
            }
        }
        result[i] = sum;
    }

    return result;
}

int main() {
    vector<int> code = {5, 7, 1, 4};
    int k = 3;

    vector<int> res = decrypt(code, k);

    cout << "Result: ";
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}