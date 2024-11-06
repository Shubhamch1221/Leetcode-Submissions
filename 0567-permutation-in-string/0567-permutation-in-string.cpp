class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        vector<int> s1_freq(26, 0);
        vector<int> s2_freq(26, 0);
         // Fill frequency array for s1
        for(char c : s1) {
            s1_freq[c - 'a']++;
        }
         // Sliding window over s2
        int i = 0, j = 0;
        while (j < s2.length()) {
            // Add current character to s2_freq
            s2_freq[s2[j] - 'a']++;
            // If the window size exceeds s1.length(), shrink the window
            if (j - i + 1 > s1.length()) {
                s2_freq[s2[i] - 'a']--;
                i++;
            }
            // Check if the two frequency vectors match
            if (s1_freq == s2_freq) return true;
            
            j++;
        }
         return false;
    }
};
