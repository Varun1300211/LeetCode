class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int fast = nums[0];
        int slow = nums[0];
        //f,s = 1
        do{
            fast = nums[nums[fast]];
            slow = nums[slow];
            // f = 2, s = 3 
        }while(fast != slow);
        
        fast = nums[0];
        //f = 1
        while(fast != slow)
        {
            fast = nums[fast];
            slow = nums[slow];
            // f = 3, s = 2
        }
        
        return slow;
        
    }
};