#include <iostream>
#include <vector>
#include <unordered_set>



void numUniqueEmails(std::vector<std::string>& emails){
    
    int n = emails.size();
    int count = 0;
   
    for(int i = 0 ;  i < n ; i++){
         int dot = 0;
        int plus = 0;

        for(int j  = 0; j < emails[i].size(); j++){


            if(emails[i][j] == '.' ){
                dot++;
            }

            if(emails[i][j] == '+' ){
                plus++;
            }
            if(emails[i][j] == '@' ){
                break;
            }
            


        }
       
        if(dot < 2 && plus < 2){
            count++;
            
        }
        

    }

    std::cout << count;

}

//popoer way

void numUniqueEmails(std::vector<std::string>& emails) {
    std::unordered_set<std::string> uniqueEmails;

    for (auto &email : emails) {
        std::string local = "", domain = "";
        bool isDomain = false, plusFound = false;

        for (char c : email) {
            if (c == '@') isDomain = true;

            if (isDomain) {
                domain += c;
            } else {
                if (c == '+') plusFound = true;
                else if (!plusFound && c != '.') local += c;
            }
        }

        uniqueEmails.insert(local + domain);
    }

    std::cout << uniqueEmails.size();
}
int main(){


    std::vector<std::string> emails = {"a@leetcode.com","b@leetcode.com","c@leetcode.com"};
    numUniqueEmails(emails);


    return 0;


}