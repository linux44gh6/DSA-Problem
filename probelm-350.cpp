#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq; // To store the frequency of each number in nums1
        vector<int> ans;

        // Step 1: Count frequencies of elements in nums1
        for (int num : nums1) {
            freq[num]++;
        }

        // Step 2: Find intersection with nums2
        for (int num : nums2) {
            if (freq[num] > 0) {          // Check if the number exists in nums1 (freq > 0)
                ans.push_back(num);       // Add it to the result
                freq[num]--;              // Decrease its frequency
            }
        }

        return ans;
    }
};
