#include <iostream>
#include <vector>
#include <stack>
#include <string>



void BaseballGame(std::vector<std::string>& ops){

    std::stack<int> st;
    
    for(std::string s :ops){

        try{
            int num = std::stoi(s);
            st.push(num);
        }       
        catch(std::invalid_argument const&){

            if(s == "C"){
                   if(!st.empty()) st.pop(); 
            }
            else if(s == "D")  st.push(st.top() * 2);
            
            else if(s == "+") {

                if(st.size() >= 2){
                     int top1 = st.top();
                     st.pop();
                     int top2 = st.top();
                     int sum = top1 + top2;
                     st.push(top1);
                     st.push(sum);
                }

            }
         
        }
    }
    int sum  = 0;
    while(!st.empty()){
        sum += st.top();
        st.pop();
    }

    std::cout << sum << std::endl;

}


/*

for (string s : ops) {
            if (s == "C") {
                if (!st.empty()) st.pop();
            } 
            else if (s == "D") {
                if (!st.empty()) st.push(st.top() * 2);
            } 
            else if (s == "+") {
                if (st.size() >= 2) {
                    int top1 = st.top(); st.pop();
                    int top2 = st.top();
                    st.push(top1);      // restore top1
                    st.push(top1 + top2);
                }
            } 
            else {
                st.push(stoi(s));
            }
        }
        
        int total = 0;
        while (!st.empty()) {
            total += st.top();
            st.pop();
        }
        return total;
    }

*/


int main(){

    std::vector<std::string> ops = {"5","2","C","D","+"};
    BaseballGame(ops);

    return 0;

}