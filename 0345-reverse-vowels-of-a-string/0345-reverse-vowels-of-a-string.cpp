class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        int n = s.length();
        int left = 0, right = n - 1;
        while (left < right) {
            // Move left pointer to the next vowel
            while (left < right && vowels.count(s[left]) == 0) {
                left++;
            }
            // Move right pointer to the previous vowel
            while (left < right && vowels.count(s[right]) == 0) {
                right--;
            }
            
            // Swap the vowels at the left and right pointers
            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
         return s;
    }
};
