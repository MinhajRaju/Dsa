#include <iostream>
#include <vector>




void NumberofLineToString(std::vector<int>& widths , std::string  s){





    int count_line = 1;
    int current_width = 0;


    for(char c : s){        
        int w  = widths[c-'a'];

        if(current_width + w > 100){

            count_line++;
            current_width =w;
        }else{
            current_width += w; 
        }
    }   

    std::cout << count_line << " "  << current_width; 

}


/*
Step 1: ASCII value

প্রতিটি character এর একটি number value থাকে (ASCII code)।

'a' = 97

'b' = 98

'c' = 99

…

'z' = 122

Step 2: 'c' - 'a'

'b' - 'a' → 98 - 97 = 1

'c' - 'a' → 99 - 97 = 2

'a' - 'a' → 97 - 97 = 0

Step 3: Index হিসেবে ব্যবহার

এখন আমরা পাই:

'a' → 0

'b' → 1

'c' → 2

এটাকে অ্যারেতে index হিসেবে ব্যবহার করা যায়: widths[c - 'a']
*/




int main(){
    
    std::vector<int> widths = {10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
    std::string s  = "abcdefghijklmnopqrstuvwxyz";

    NumberofLineToString(widths , s);

    return 0;
}