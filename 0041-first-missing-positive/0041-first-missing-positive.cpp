class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        
        // Step 1: Replace non-positive numbers with n + 1
        for (int i = 0; i < n; i++) {
            if (nums[i] <= 0) {
                nums[i] = n + 1;
            }
        }
        
        // Step 2: Use index marking to identify present numbers
        for (int i = 0; i < n; i++) {
            int index = abs(nums[i]) - 1; // Get the index of the current number
            if (index < n) {
                nums[index] = -abs(nums[index]); // Mark the number as present
            }
        }
        
        // Step 3: Identify the first missing positive
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                return i + 1; // Return the first missing positive integer
            }
        }
        
        return n + 1; // If all numbers from 1 to n are present
    }
};
