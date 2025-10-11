#include <iostream>
#include <string>
#include <stack>

bool ValidParentheses(std::string s){

    std::stack<char> st;

    for(int i  = 0;  i < s.size(); i++){

        char  ch = s[i];

        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }else{
            if(st.empty()) return false;  // closing কিন্তু open নাই

            char top = st.top();

            if( (ch == ')' && top != '(') 
             || (ch == '}' && top != '{') 
             || (ch == ']' && top != '[')){

                return false;
            }


           st.pop();
        }


    }

   return st.empty();
   
}


int main(){
    std::string s = "()";
    bool res  = ValidParentheses(s);
    std::cout << res;
    return 0;
}