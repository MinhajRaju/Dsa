#include <bits/stdc++.h>
using namespace std;

vector<int> shortestToChar(string s, char c) {
    vector<int> result(s.size(), INT_MAX);
    stack<int> st; // এখানে আমরা 'c' character এর index রাখব

    // Step 1: সব 'c' এর index collect করি
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            st.push(i);
        }
    }

    // এখন প্রতিটা position এর জন্য distance বের করব
    for (int i = 0; i < s.size(); i++) {
        // stack এর সব index এর মধ্যে থেকে সবচেয়ে কাছের distance দরকার
        // তাই একটা temp stack use করে চেক করব
        stack<int> temp = st;
        int mini = INT_MAX;
        while (!temp.empty()) {
            int pos = temp.top();
            temp.pop();
            mini = min(mini, abs(i - pos));
        }
        result[i] = mini;
    }

    return result;
}

int main() {
    string s = "loveleetcode";
    char c = 'e';
    vector<int> ans = shortestToChar(s, c);
    for (int x : ans) cout << x << " ";
}



//optimize version 


#include <bits/stdc++.h>
using namespace std;

vector<int> shortestToChar(string s, char c) {
    vector<int> pos;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) pos.push_back(i);
    }

    vector<int> ans(s.size());
    int start = 0, end = 1;

    for (int i = 0; i < s.size(); i++) {
        // যদি পরের e এর কাছাকাছি চলে যাই
        if (end < pos.size() && abs(i - pos[start]) > abs(i - pos[end])) {
            start++;
            end++;
        }
        ans[i] = abs(i - pos[start]);
    }

    return ans;
}

int main() {
    string s = "loveleetcode";
    char c = 'e';
    vector<int> ans = shortestToChar(s, c);
    for (int x : ans) cout << x << " ";
}
