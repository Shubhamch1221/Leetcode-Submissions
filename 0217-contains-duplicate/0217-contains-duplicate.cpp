class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
//         // t=o[nlogn],o[1]
//         sort(nums.begin(),nums.end());
//         int n =nums.size();
//         for(int i=0;i<n-1;i++){
//             if(nums[i]==nums[i+1])return true;
//         }
//         return false;
//using set
    unordered_set<int>s;
    int n=nums.size();
    for(int i=0;i<n;i++)s.insert(nums[i]);
    if(nums.size()==s.size())return false;
    return true;
     }
 };