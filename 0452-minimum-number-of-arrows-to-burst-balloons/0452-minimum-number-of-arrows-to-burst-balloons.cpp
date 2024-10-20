class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.empty())return 0;
        int n=points.size();
        sort(points.begin(),points.end(),[](vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        });
        int arrow=1;
        int end=points[0][1];
        for(int i=1;i<n;i++){
            if(points[i][0]>end){
                arrow++;
                end=points[i][1];
            }
        }
         return arrow;
    }
};