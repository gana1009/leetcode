class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> a;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                a.push_back(i);
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==target)
            {
                a.push_back(i);
                break;
            }
        }
        if(a.empty())
        {
            a.push_back(-1);
            a.push_back(-1);
        }
        return a;
    }
};