#include <iostream>
#include <vector>
using namespace std;

void keyboardRow(std::vector<std::string>& words ){

    int ws = words.size();
    vector<string> res;

    string firstrow  = "qwertyuiop";
    string secondrow = "asdfghjkl";
    string thirdrow  = "zxcvbnm";

    for (int i = 0; i < ws; i++) {
        string w = words[i];
        if (w.empty()) continue;

        char first = tolower(w[0]);
        int rowType = 0;

        if (firstrow.find(first) != string::npos) rowType = 1;
        else if (secondrow.find(first) != string::npos) rowType = 2;
        else if (thirdrow.find(first) != string::npos) rowType = 3;

        bool ok = true;

        for (int j = 0; j < w.size(); j++) {
            char c = tolower(w[j]);
            if (rowType == 1 && firstrow.find(c) == string::npos) { ok = false; break; }
            if (rowType == 2 && secondrow.find(c) == string::npos) { ok = false; break; }
            if (rowType == 3 && thirdrow.find(c) == string::npos) { ok = false; break; }
        }

        if (ok) res.push_back(w);
    }

    for (int i = 0; i < res.size(); i++) cout << res[i] << " ";


}


int main(){

    std::vector<std::string> words = {"Hello","Alaska","Dad","Peace"};
    keyboardRow(words);

    return 0;
}