class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();  // Step 1: Get the length of the string
         // Step 2: Try every possible length for the repeated substring
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {  // Step 3: Check if the length divides the total length of the string
                string subs = s.substr(0, i);  // Step 4: Get the substring of length i from the start
                string repeat = "";  // Step 5: Prepare an empty string to repeat the substring
             // Step 6: Repeat the substring enough times to match the full length of the original string
                for (int j = 0; j < n / i; j++) {
                    repeat += subs;
                }

                // Step 7: Check if the repeated substring matches the original string
                if (repeat == s) return true;
            }
        }

        // Step 8: If no valid repeated substring was found, return false
        return false;
    }
};
