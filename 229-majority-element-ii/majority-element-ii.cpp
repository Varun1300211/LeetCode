class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        vector<int>ans;
        int t=n/3;
        for(auto x : m){
            int e=x.first;
            int c=x.second;
            if(c > t){
                ans.push_back(e);
            }
        }
        return ans;
    }
};