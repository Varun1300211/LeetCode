class Solution {
    public int findDuplicate(int[] nums) {
        int result=0;
        Arrays.sort(nums);
        for(int i=0;i<nums.length;i++){
            if(nums[i]==nums[i+1]){
                result=nums[i];
                break;
            }
        }
        return result;
    }
}