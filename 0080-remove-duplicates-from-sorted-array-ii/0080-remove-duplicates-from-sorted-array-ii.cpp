class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Handle empty input

        int index = 1; // Start from the second element
        int count = 1; // Count of current duplicates

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                count = 1; // Reset count for a new value
            }

            // Allow at most 2 duplicates
            if (count <= 2) {
                nums[index++] = nums[i]; // Place the value in the new position
            }
        }

        return index; // Return the new length
    }
};
