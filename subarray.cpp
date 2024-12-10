#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6};
    int n = a.size();

    // Outer loop to fix the starting point
    for (int i = 0; i < n; i++) {
        // Inner loop to fix the ending point
        for (int j = i; j < n; j++) {
            // Print subarray from index i to j
            cout << "Subarray: ";
            for (int k = i; k <= j; k++) {
                cout << a[k] << " ";
            }
            // Calculate and print the length of the subarray
            int length = j - i + 1;
            cout << " | Length: " << length << endl;
        }
    }

    return 0;
}
