

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> rankMap;
        vector<int> sortedArr = arr;
        
        // Sort and remove duplicates
        sort(sortedArr.begin(), sortedArr.end());
        sortedArr.erase(unique(sortedArr.begin(), sortedArr.end()), sortedArr.end());

        // Assign ranks
        for (int i = 0; i < sortedArr.size(); i++) {
            rankMap[sortedArr[i]] = i + 1;  // Rank starts from 1
        }

        // Transform original array
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = rankMap[arr[i]];
        }

        return arr;
    }
};
