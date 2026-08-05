#include <iostream>
#include <vector>
#include <string>

using namespace std;


int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    
    int checkIndex = 0;
  
    if (ruleKey == "type") {
        checkIndex = 0;
    } else if (ruleKey == "color") {
        checkIndex = 1;
    } else if (ruleKey == "name") {
        checkIndex = 2;
    }
    
    int count = 0;
    
    
    for (int i = 0; i < items.size(); i++) {
        if (items[i][checkIndex] == ruleValue) {
            count++; 
        }
    }
    
    return count; 
}


int main() {
    
   
    vector<vector<string>> items = {
        {"phone", "blue", "pixel"},
        {"computer", "silver", "lenovo"},
        {"phone", "gold", "iphone"}
    };
    

    string ruleKey = "color";
    string ruleValue = "silver";
    
  
    int result = countMatches(items, ruleKey, ruleValue);
    
   
    cout << "Total items matching the rule: " << result << endl;
    
    return 0;
}