#include <iostream>
#include <vector>
#include <algorithm> // sort করার জন্য লাগে

using namespace std;

int main() {
    vector<int> salary = {4000, 3000, 1000, 2000};
    int n = salary.size();

    
    sort(salary.begin(), salary.end()); // এখন হবে: [1000, 2000, 3000, 4000]

   
    double sum = 0;

    for (int i = 1; i < n - 1; i++) {
        sum += salary[i];
    }

    double average = sum / (n - 2);

    cout << "Average Salary: " << average << endl;

    return 0;
}