#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int maxSum = 0;
    int currSum = 0;
    int k = 4;

    // Calculate the sum of the first window
    for (int i = 0; i < k; i++) {
        currSum += nums[i];
    }
    maxSum = currSum;

    // Sliding window logic
    for (int i = k; i < nums.size(); i++) {
        currSum = currSum - nums[i - k] + nums[i]; // Add new element, remove old element
        maxSum = max(currSum, maxSum);
    }
cout<<maxSum;

    return 0;
}
