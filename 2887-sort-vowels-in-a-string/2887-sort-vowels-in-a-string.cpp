class Solution {
public:
    string sortVowels(string s) {
        unordered_set<char> vowels={'a','e','i','o','u','A','E','I','O','U'};
        vector<char> vow;
        for(int i=0;i<s.length();i++){
            if(vowels.count(s[i])){
                vow.push_back(s[i]);
            }
        }
        sort(vow.begin(),vow.end());
        int pos=0;
        for(int i=0;i<s.length();i++){
         if(vowels.count(s[i])){
            s[i]=vow[pos++];
         }   
        }
        return s;
    }
};