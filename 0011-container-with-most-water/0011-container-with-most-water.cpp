class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1;
        int maxi=0;
        while(l<r){
         int lh=height[l];
         int rh=height[r];
         int mini=min(lh,rh);
           int len=r-l;
           int area=mini*len;
           maxi=max(maxi,area);
           if(lh<rh)l++;
           else r--;
        }
        return maxi;
    }
};