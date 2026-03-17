#include <iostream>
#include <vector>

using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    int current = 1;
    int i = 0;     
    int n = arr.size();

    while (k > 0) {
      
        if (i < n && arr[i] == current) {
            i++;
        } else {
           
            k--;
         
            if (k == 0) {
                return current;
            }
        }
        current++;
    }
    return current;
}

int main() {
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    
    cout << "5th missing number is: " << findKthPositive(arr, k) << endl;
    
    return 0;
}