class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int prefixMod =0, result =0;
        vector<int> ans(k);
        ans[0]=1;
        for(int n : nums)
        {
            prefixMod = (prefixMod + n% k + k)%k;
            result += ans[prefixMod];
            ans[prefixMod]++;
        }
        return result;
    }
};