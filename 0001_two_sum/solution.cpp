#include <vector>
using std::vector;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum;
        vector<int> ans;
        int n = nums.size();
        // Это самый наивный способ, но пока этого достаточно O(n^2):
        for (int i = 0; i < n; i++){
            for (int k = i + 1; k < n; k++){
                sum = nums[i] + nums[k];
                if (sum == target){
                    ans.push_back(i);
                    ans.push_back(k);
                    return ans;
                }
            }
        }
        return {};
        
    }
};