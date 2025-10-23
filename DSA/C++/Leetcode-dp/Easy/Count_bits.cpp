#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// ====================== 1. Stack version ======================
int countOnesStack(int n) {
    stack<int> st;
    int num = n;
    
    while(num > 0) {
        st.push(num % 2);
        num /= 2;
    }
    
    int count = 0;
    while(!st.empty()) {
        if(st.top() == 1) count++;
        st.pop();
    }
    
    return count;
}

// ====================== 2. Loop version ======================
int countOnesLoop(int n) {
    int count = 0;
    while(n > 0) {
        count += n % 2;
        n /= 2;
    }
    return count;
}

// ====================== 3. Bitwise version ======================
int countOnesBitwise(int n) {
    int count = 0;
    while(n > 0) {
        if(n & 1) count++;
        n = n >> 1;
    }
    return count;
}

// ====================== 4. DP version ======================
vector<int> countBitsDP(int n) {
    vector<int> res(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        res[i] = res[i / 2] + (i % 2);
    }
    return res;
}

// ====================== Main ======================
int main() {
    int n = 20;
    vector<int> resStack, resLoop, resBitwise, resDP;

    // Fill arrays
    for(int i = 0; i <= n; i++) {
        resStack.push_back(countOnesStack(i));
        resLoop.push_back(countOnesLoop(i));
        resBitwise.push_back(countOnesBitwise(i));
    }

    resDP = countBitsDP(n);

    // Print results
    cout << "Stack version:   ";
    for(int x : resStack) cout << x << " ";
    cout << endl;

    cout << "Loop version:    ";
    for(int x : resLoop) cout << x << " ";
    cout << endl;

    cout << "Bitwise version: ";
    for(int x : resBitwise) cout << x << " ";
    cout << endl;

    cout << "DP version:      ";
    for(int x : resDP) cout << x << " ";
    cout << endl;

    return 0;
}
