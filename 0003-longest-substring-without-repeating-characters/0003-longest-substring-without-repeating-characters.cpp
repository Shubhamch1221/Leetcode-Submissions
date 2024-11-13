class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),maxi=0;
        unordered_set<char> set;
        int start=0;
        for(int end=0;end<n;end++){
            if(set.find(s[end])==0){
                set.insert(s[end]);
                maxi=max(maxi,end-start+1);
            }else{
            while(set.count(s[end])){
                set.erase(s[start]);
                start++;
            }
            set.insert(s[end]);
        }
      }
        return maxi;
    }
};