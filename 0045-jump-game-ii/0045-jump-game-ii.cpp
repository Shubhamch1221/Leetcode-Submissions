class Solution {
public:
    int jump(vector<int>& nums) {
        int  n=nums.size();
        int jump=0;
        int current=0;
        int reachable=0;
        for(int i=0;i<n-1;i++){
            reachable=max(reachable,nums[i]+i);
            if(i==current){
                current=reachable;
                jump++;
            }
        }
        return jump;
    }
};