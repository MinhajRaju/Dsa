#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

// Destination City বের করার ফাংশন
string destCity(vector<vector<string>>& paths) {
    unordered_set<string> sourceCities;

    // ১. সব Starting City বা শুরুর শহরগুলোকে সেটে রাখছি
    for (const auto& path : paths) {
        sourceCities.insert(path[0]);
    }

    // ২. এবার চেক করছি কোন গন্তব্য (Destination) শহরটি সেটে নেই
    for (const auto& path : paths) {
        string dest = path[1];
        
        // যদি dest শহরটি sourceCities সেটে না থাকে, সেটাই আমাদের উত্তর
        if (sourceCities.find(dest) == sourceCities.end()) {
            return dest;
        }
    }

    return "";
}


int main() {
   
    vector<vector<string>> paths = {
        {"London", "New York"}, 
        {"New York", "Lima"}, 
        {"Lima", "Sao Paulo"}
    };


    string result = destCity(paths);


    cout << "The Destination City is: " << result << endl;

    return 0;
}