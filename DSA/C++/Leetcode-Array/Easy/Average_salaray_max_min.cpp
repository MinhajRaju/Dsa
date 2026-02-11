#include <iostream>
#include <vector>
#include <algorithm> // sort করার জন্য লাগে

using namespace std;

int main() {
    vector<int> salary = {4000, 3000, 1000, 2000};
    int n = salary.size();

    // 1. Sort করা (আপনার লজিক)
    sort(salary.begin(), salary.end()); // এখন হবে: [1000, 2000, 3000, 4000]

    // 2. প্রথম (min) এবং শেষ (max) বাদ দিয়ে মাঝখানের গুলো যোগ করা
    double sum = 0;
    // লুপ ১ নম্বর ইনডেক্স থেকে শুরু হয়ে শেষের আগেরটা পর্যন্ত চলবে
    for (int i = 1; i < n - 1; i++) {
        sum += salary[i];
    }

    // 3. গড় বের করা (মোট সংখ্যা থেকে ২ বাদ যাবে)
    double average = sum / (n - 2);

    cout << "Average Salary: " << average << endl;

    return 0;
}