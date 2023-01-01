class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=nums[0];
        if(nums.size()==1)
            return nums[0];
        
        for(int i=1;i<nums.size();i++){
            k=k^nums[i];
        }
        return k;
    }
};