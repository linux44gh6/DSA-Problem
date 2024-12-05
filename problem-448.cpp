#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {4, 3, 2, 7, 8, 2, 3, 1};
    sort(a.begin(), a.end()); // Sort the array
    vector<int> ans;

    for (int i = 1; i <= a.size(); i++) {
        if (find(a.begin(), a.end(), i) == a.end()) { 
            ans.push_back(i); 
        }
    }

    for (int val : ans) {
        cout << val << " "; // Print missing numbers
    }

    return 0;
}
