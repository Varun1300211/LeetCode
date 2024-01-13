class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int result;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                result=nums[i];
                break;
            }
        }
        return result;
    }
};