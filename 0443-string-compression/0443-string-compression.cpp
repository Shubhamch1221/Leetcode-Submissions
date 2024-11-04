class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0; // Write position
        int count = 1; // Count occurrences of each character
        for (int j = 1; j < chars.size(); j++) {
            if (chars[j] == chars[j - 1]) {
                count++;
            } else {
                // Write the previous character
                chars[i] = chars[j - 1];
                i++;
                 // Write the count if it's greater than 1
                if (count > 1) {
                    for (char c : to_string(count)) {
                        chars[i] = c;
                        i++;
                    }
                }
                count = 1;
            }
        }
         // Handle the last character and its count
        chars[i] = chars.back(); // Write the last character
        i++;
        if (count > 1) {
            for (char c : to_string(count)) {
                chars[i] = c;
                i++;
            }
        }
          return i; // Return the new length of the compressed array
    }
};
