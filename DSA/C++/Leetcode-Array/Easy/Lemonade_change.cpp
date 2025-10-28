#include <bits/stdc++.h>
using namespace std;

bool lemonadeChange(vector<int>& bills) {
    int five = 0, ten = 0; // কতগুলো $5 আর $10 আছে ট্র্যাক করব

    for (int bill : bills) {
        if (bill == 5) {
            // কাস্টমার $5 দিল — change দিতে হবে না
            five++;
        } 
        else if (bill == 10) {
            // কাস্টমার $10 দিল — $5 change দিতে হবে
            if (five == 0) return false; // change নাই → fail
            five--; // $5 দিলাম change হিসেবে
            ten++;  // এখন আমাদের কাছে $10 জমল
        } 
        else { // bill == 20
            // কাস্টমার $20 দিল — $15 change দিতে হবে
            if (ten > 0 && five > 0) {
                // $10 + $5 দেওয়া সম্ভব
                ten--;
                five--;
            } 
            else if (five >= 3) {
                // না থাকলে তিনটা $5 দেই
                five -= 3;
            } 
            else {
                // change দেওয়া সম্ভব না
                return false;
            }
        }
    }

    // যদি সব কাস্টমারকে ঠিকমতো change দিতে পারি
    return true;
}

int main() {
    vector<int> bills = {5, 5, 5, 10, 20};
    
    if (lemonadeChange(bills))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
