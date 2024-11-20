class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> c(60, 0);  // Array to store the frequency of remainders
        int ans = 0;

        for (int t : time) {
            int remainder = t % 60;  // Remainder when dividing by 60
            int comp = (60 - remainder) % 60;  // Find the complement remainder
            
            // Add the count of previous complements that would form a pair divisible by 60
            ans += c[comp];
            
            // Update the frequency of the current remainder
            c[remainder]++;
        }

        return ans;
    }
};
