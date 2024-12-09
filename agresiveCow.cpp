#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPosible(vector<int>& ar, int n, int c, int maxAllowedDistance) {
    int cows = 1; // Place the first cow
    int lastPosition = ar[0]; // Place the first cow at the first stall

    for (int i = 1; i < n; i++) {
        if (ar[i] - lastPosition >= maxAllowedDistance) {
            cows++; // Place another cow
            lastPosition = ar[i];
        }
        if (cows == c) { // If all cows are placed
            return true;
        }
    }
    return false; // Not possible to place all cows
}

int getDistace(vector<int>& ar, int n, int c) {
    sort(ar.begin(), ar.end()); // Sort the stalls
    int low = 1; // Minimum possible distance
    int high = ar[n - 1] - ar[0]; // Maximum possible distance
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPosible(ar, n, c, mid)) {
            ans = mid; // Update answer
            low = mid + 1; // Try for a larger distance
        } else {
            high = mid - 1; // Try for a smaller distance
        }
    }

    return ans; // Return the largest minimum distance
}

int main() {
    int n = 5, c = 3;
    vector<int> arr = {1, 2, 8, 4, 9};
    cout << getDistace(arr, n, c) << endl;
    return 0;
}
