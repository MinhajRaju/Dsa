#include <iostream>
#include <unordered_map>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
    vector<string> banned = {"hit"};

    unordered_map<string, int> freq;
    string word = "";

    for (int i = 0; i <= paragraph.size(); i++) {
        char c = paragraph[i];
        if (isalpha(c)) {
            word += tolower(c);
        } else if (word.size() > 0) {
            freq[word]++;
            word = "";
        }
    }

    for (string b : banned) {
        if (freq.find(b) != freq.end()) {
            freq.erase(b);
        }
    }

    string mostCommon = "";
    int maxCount = 0;

    for (auto it : freq) {
        if (it.second > maxCount) {
            maxCount = it.second;
            mostCommon = it.first;
        }
    }

    cout << mostCommon << endl;
}
