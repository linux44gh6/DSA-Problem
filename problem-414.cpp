class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // Sort the array in ascending order
        sort(nums.begin(), nums.end());
        
        // Remove duplicates
        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        // Check the size of the array after removing duplicates
        int n = nums.size();

        // Return the third maximum if it exists, otherwise return the largest
        if (n >= 3) {
            return nums[n - 3]; // Third maximum
        } else {
            return nums[n - 1]; // Largest value
        }
    }
};
